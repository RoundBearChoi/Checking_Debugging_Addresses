// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

int classA();
int classB();
int classC();

int intB = 0;
int intC = 0;

int arrInt[10] = { 1000,10000, 2147483647,100,100,100,100,100,100,100 };
char arrChar[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
bool arrBool[10] = { true, true, true, true, true, true, true, true, true, true };

int main()
{
	classA();
	classC();
}

int classA()
{
	int intA = 12;
	classB();
	return 0;
}

int classB()
{
	int* pB;
	intB = 300;

	//std::cout << intB << " " << intC << std::endl;

	return 0;
}

int classC()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << &arrInt[i] << std::endl;
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		uintptr_t address = uintptr_t(&arrChar[0] + (i * sizeof(char)));
		char value = *reinterpret_cast<char*>(address);

		//std::cout << i << ": " << value << std::endl;

		std::stringstream stream;
		stream << std::hex << address;
		std::string resultAddress(stream.str());

		std::cout << i << ": " << resultAddress << std::endl;
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << &arrBool[i] << std::endl;
	}

	return 0;
}