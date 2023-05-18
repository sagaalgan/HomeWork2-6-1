#include <iostream>

int calculator(double a, double b, int c)
{
	if (c == 1)
	{
		a = a + b;
		std::cout << "Сумма 2-ух чисел равна: " << a << std::endl;
	}
	else if (c == 2)
	{
		a = a - b;
		std::cout << "Разность 2-ух чисел равна: " << a << std::endl;
	}
	else if (c == 3)
	{
		a = a * b;
		std::cout << "Произведение 2-ух чисел равна: " << a << std::endl;
	}
	else if (c == 4)
	{
		a = a / b;
		std::cout << "Частное 2-ух чисел равна: " << a << std::endl;
	}
	else if (c == 5)
	{
		std::cout << a << " ";
		for (int i = 1; i < b; i++)
		{
			a = a * a;
		}
		std::cout << "в степени " << b << " = " << a << std::endl;
	}
	return 0;
}