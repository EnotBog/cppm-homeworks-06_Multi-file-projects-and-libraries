#include <cstdio>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <windows.h>
#include <locale.h>
#include <fstream>
#include "class_counter.cpp"




int main()
{

	//SetConsoleOutputCP(65001);
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int buf_int;
	std::string yes = "��";
	std::string no = "���";
	std::string stop = "�";
	std::string buff_console;
	std::string up_c = "+";
	std::string down_c = "-";
	std::string show_c = "=";


	Counter counter1;

	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: "; std::cin >> buff_console;
	if (buff_console == yes) {
		std::cout << "������� ��������� �������� ��������: " << std::endl; std::cin >> buf_int;
		counter1.set_counter(buf_int);
	}


	while (true)
	{
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
		std::cin >> buff_console;
		if (buff_console == stop) { std::cout << "�� ��������!"; break; }
		else if (buff_console == up_c) { counter1.up_counter(); }
		else if (buff_console == down_c) { counter1.down_counter(); }
		else if (buff_console == show_c) { counter1.print_counter(); }
		else { std::cout << "����������� �������" << std::endl; continue; }
	}


	/*	+: ��������� ������� �� 1
		- : ��������� ������� �� 1
		= : �������� ������� �������� ��������
		x : ��������� ������ ���������*/



return 0;
}