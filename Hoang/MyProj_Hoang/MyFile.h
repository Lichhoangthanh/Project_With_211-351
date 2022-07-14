#pragma once

#include <string>

class MyFile
{
public:
    // Warning: GETTING AN INSTANCE WILL OVERWRITE SINGLETON'S FILE PATH!
    // FYI: Incredibly bad practice. Unfortunately, this task demands it.
    static MyFile& get_instance(std::string filePath);

    bool write_to_the_end_of_file(std::string source);
    bool rewrite_file(std::string source);
    std::string read_from_file();

private:
    MyFile(std::string filePath) {}

    bool write_to_file(std::string source, std::ios_base::openmode mode);

    std::string filePath;

public:
    MyFile(MyFile const&) = delete;
    void operator=(MyFile const&) = delete;
};
