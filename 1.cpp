#include <iostream>
#include <string>
#include <bitset>

std::string toBinary(std::string const &str) {
	std::string binary = "";
	for (char const &c: str) {
		binary += std::bitset<8>(c).to_string() + ' ';
	}
	return binary;
}

int main()
{
	std::string str = "111";

	std::string binary = toBinary(str);
	std::cout << binary << std::endl;

	return 0;
}
