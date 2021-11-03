#include<iostream>
#include <iomanip>
#include <cmath>
int main()
{

	setlocale(LC_ALL, "Rus");
	int d, m,y,a,b,r;
	std::cout << "Введите день и месяц:";
	std::cin >> d >> m;
	y = 0;
	r = 0;
	a = (14-m)/12;
	b = m+12*a-2;
	for (int i = 2021; i < 9999; i++)
	{
		y = i - a;
		r = (d + y + y / 4 - y / 100 + y / 400 + 31 * b / 12) % 7;
		if (r == 5)
		{
			std::cout << i;
			break;
		}
	}
	
	return 0;
}