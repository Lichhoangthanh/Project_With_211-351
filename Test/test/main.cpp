#include <iostream>
#include "MyFile.h"

int main()
{
	MyFile& file = MyFile::get_instance("test.txt");

	file.rewrite_file("First Test.\n");

	std::cout << file.read_from_file();
	std::cout << std::endl;

	file.write_to_the_end_of_file("Second Test.\n");

	std::cout << file.read_from_file();
	std::cout << std::endl;

	file.rewrite_file("Third Test.\nRewritten file.\n");

	std::cout << file.read_from_file();

	return 0;
}
