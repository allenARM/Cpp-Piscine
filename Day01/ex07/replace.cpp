#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::string         str1;
    std::string         str2;
    std::string         buf;
    std::string         output;
    std::string         file;

	if (argc != 4 && !argv[2] && !argv[3])
	{
		std::cout << "I need healing" << std::endl;
		std::cout << "file <str1> <str2>" << std::endl;
		return (2);
	}
	str1 = argv[2];
	str2 = argv[3];
	file = argv[1];
	output = file + ".replace";
	std::ifstream   readFile(file);
	if (readFile.fail())
	{
		std::cout << "opening error" << std::endl;
		return (2);
	}
	std::ofstream    outFile(output);
	if (outFile.fail())
	{
		std::cout << "creating error" << std::endl;
		return (2);
	}
	while (std::getline(readFile, buf))
	{
		while (buf.find(str1) != std::string::npos)
		{
			buf.replace(buf.find(str1), str1.length(), str2);
		}
		outFile << buf;
		outFile << std::endl;
	}
	if (buf == "")
		outFile << std::endl;
	readFile.close();
	outFile.close();
	return (0);
}