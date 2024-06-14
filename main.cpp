#include <iostream>
#include <Windows.h>
#include <string>

void Start();
void MakeDecision(float(*Function)(float num1, float num2), float& number1, float& number2, char& sign);

float Plus(float num1, float num2);
float Minus(float num1, float num2);
float Multip(float num1, float num2);
float Devide(float num1, float num2);
float PercentPercentFromNumber(float percent, float number);
float PercentNumFromNum(float num1, float num2);

//void F00()
//{
//	std::cout << "\nF00\n";
//}
//
//void F01(int one)
//{
//	std::cout << one << "\n";
//}
//
//std::string DataFromDB(std::string data)
//{
//	return data;
//}
//
//std::string DataFromWebServer(std::string data)
//{
//	return data;
//}
//
//void ShowInfo(std::string(*dataPtr)(std::string a))
//{
//	std::cout << dataPtr("j");
//}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*void (*ptr)();
	ptr = F00;
	ptr();

	void (*ptr1)(int one);
	ptr1 = F01;
	ptr1(1);

	ShowInfo(DataFromDB);*/

	Start();

	return 0;
}

void Start()
{
	float number1, number2;
	char sign;

	std::cout << "\nВведите 2 числа:\nПервое: ";
	std::cin >> number1;
	std::cout << "Второе: ";
	std::cin >> number2;

	std::cout << "\nВыберите действие:\n+ - * / %\n";
	std::cin >> sign;


	if (sign == '+')
	{
		MakeDecision(Plus, number1, number2, sign);
	}
	else if (sign == '-')
	{
		MakeDecision(Minus, number1, number2, sign);
	}
	else if (sign == '*')
	{
		MakeDecision(Multip, number1, number2, sign);
	}
	else if (sign == '/')
	{
		MakeDecision(Devide, number1, number2, sign);
	}
	else if (sign == '%')
	{
		char choose;

		do
		{
			std::cout << "\n1.Найти процент от числа\n2.Найти сколько процентов составляет число\n";
			std::cin >> choose;
		} while (choose < 49 || choose > 50);

		if (choose == '1')
		{
			MakeDecision(PercentPercentFromNumber, number1, number2, sign);
		}
		else
		{
			MakeDecision(PercentNumFromNum, number1, number2, sign);
		}
	}
}

void MakeDecision(float(*Function)(float num1, float num2), float& number1, float& number2, char& sign)
{
	std::cout << "\nРЕЗУЛЬТАТ: " << Function(number1, number2);
}


float Plus(float num1, float num2)
{
	return num1 + num2;
}

float Minus(float num1, float num2)
{
	return num1 - num2;
}

float Multip(float num1, float num2)
{
	return num1 * num2;
}

float Devide(float num1, float num2)
{
	return num1 / num2;
}

float PercentPercentFromNumber(float percent, float number)
{
	return number / 100 * percent;
}

float PercentNumFromNum(float num1, float num2)
{
	return num1 / (num2 / 100);
}

