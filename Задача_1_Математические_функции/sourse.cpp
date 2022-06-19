#include <cstdio>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <windows.h>
#include <locale.h>
#include <fstream>

#include "Header.h"





int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 0, b = 0, buf = 0;




	while (buf != 6)
	{
		std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень), 6 - Выход: ";  std::cin >> buf;
		if (buf == 6) { break; }
		std::cout << "Введите первое число: ";  std::cin >> a;
		std::cout << "Введите второе число: ";  std::cin >> b;
		switch (buf)
		{
		case 1: std::cout << a << " + " << b << " = " << sum_f(a, b) << "\n"; break;
		case 2: std::cout << a << " - " << b << " = " << subtract_f(a, b) << "\n"; break;
		case 3: std::cout << a << " * " << b << " = " << multiplication_f(a, b) << "\n"; break;
		case 4: std::cout << a << " / " << b << " = " << division_f(a, b) << "\n"; break;
		case 5: std::cout << a << " в степени " << b << " = " << exponentiation_f(a, b) << "\n"; break;
		}
	}

	
	return 0;
}