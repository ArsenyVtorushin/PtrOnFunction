#include <iostream>

void F00()
{
	std::cout << "\nF00\n";
}

void F01(int one)
{
	std::cout << one << "\n";
}

std::string DataFromDB(std::string data)
{
	return data;
}

std::string DataFromWebServer(std::string data)
{
	return data;
}

void ShowInfo(std::string(*dataPtr)(int a))
{
	std::cout << dataPtr(1);
}

int main()
{

	void (*ptr)();
	ptr = F00;
	ptr();

	void (*ptr1)(int one);
	ptr1 = F01;
	ptr1(1);

	std::cout << DataFromDB("info");



	ShowInfo(DataFromDB);



	return 0;
}