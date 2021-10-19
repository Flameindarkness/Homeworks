#include<iostream>
#include <iomanip>
#include <cmath>
int main()
{

	setlocale(LC_ALL, "Rus");
	int x, coun, max,s;
	coun = 1000;
	s = 0;
	std::cout << "Введите исходное число>0:";
	std::cin >> x;
		s = x / 1000;
		for (int i = 0; i < s; i++)
		{
			std::cout << "M";
		}
		x =x%1000;
		s = x / 100;
		if (s == 9)
		{
			std::cout << "CM";
		}
		if (s < 5)
		{
			if (s == 4)
			{
				std::cout << "CD";
			}
			else
			{
				for (int i = 0; i < s; i++)
				{
					std::cout << "C";
				}
			}
		}
		if (s >= 5 && s != 9)
		{
			s = x / 500;
			for (int i = 0; i < s; i++)
			{
				std::cout << "D";
			}
		}
		x = x % 100;
		s = x / 10;
		if (s == 9)
		{
			std::cout << "XC";
		}
		if (s < 5)
		{
			if (s == 4)
			{
				std::cout << "XL";
			}
			else
			{
				for (int i = 0; i < s; i++)
				{
					std::cout << "X";
				}
			}
		}
		if (s >= 5 && s != 9)
		{
			s = x / 50;
			for (int i = 0; i < s; i++)
			{
				std::cout << "L";
			}
		}
		x = x % 10;
		s = x / 1;
		if (s == 9)
		{
			std::cout << "IX";
		}
		if (s < 5)
		{
			if (s == 4)
			{
				std::cout << "IV";
			}
			else
			{
				for (int i = 0; i < s; i++)
				{
					std::cout << "I";
				}
			}
		}
		if(s>=5 && s!=9)
		{
			s = x / 5;
			for (int i = 0; i < s; i++)
			{
				std::cout << "V";
			}
		}
		x = x % 1;
	return 0;
}