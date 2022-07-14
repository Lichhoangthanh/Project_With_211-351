#include <fstream>
#include <sstream>
#include "MyFile.h"

MyFile& MyFile::get_instance(std::string filePath)
{
    static MyFile instance(filePath);

    // Overwrite file path in case it changed
    // FYI: Having an argument passed this way to a singleton
    // is a bad practice. Unfortunately, this task demands it.
    // Warning: THIS WILL OVERWRITE FILE PATH FOR ALL REFERENCES TO THE SINGLETON!
    instance.filePath = filePath;

    // Ensure file is created
    std::ofstream file(instance.filePath, std::ios::app);

    return instance;
}

bool MyFile::write_to_file(std::string source, std::ios::openmode mode)
{
    std::ofstream file(filePath, mode);
    if (!file.is_open())
    {
        return false;
    }

    file << source;

    return true;
}

bool MyFile::write_to_the_end_of_file(std::string source)
{
    return write_to_file(source, std::ios::app);
}

bool MyFile::rewrite_file(std::string source)
{
    return write_to_file(source, std::ios::trunc);
}

std::string MyFile::read_from_file()
{
    std::ifstream file(filePath);
    if (!file.is_open())
    {
        return std::string();
    }

    std::stringstream buffer;
    buffer << file.rdbuf();

    return buffer.str();
}
