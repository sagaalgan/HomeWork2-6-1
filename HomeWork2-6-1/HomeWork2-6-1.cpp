#include <iostream>

int calculator(double a, double b, int c);
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	int c;
	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << std::endl;
	std::cout << "Введите второче число: ";
	std::cin >> b;
	std::cout << std::endl;	
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> c;
	std::cout << std::endl;
	calculator(a, b, c);
}