#include <iostream>

int calculator(double a, double b, int c)
{
	if (c == 1)
	{
		a = a + b;
		std::cout << "����� 2-�� ����� �����: " << a << std::endl;
	}
	else if (c == 2)
	{
		a = a - b;
		std::cout << "�������� 2-�� ����� �����: " << a << std::endl;
	}
	else if (c == 3)
	{
		a = a * b;
		std::cout << "������������ 2-�� ����� �����: " << a << std::endl;
	}
	else if (c == 4)
	{
		a = a / b;
		std::cout << "������� 2-�� ����� �����: " << a << std::endl;
	}
	else if (c == 5)
	{
		std::cout << a << " ";
		for (int i = 1; i < b; i++)
		{
			a = a * a;
		}
		std::cout << "� ������� " << b << " = " << a << std::endl;
	}
	return 0;
}