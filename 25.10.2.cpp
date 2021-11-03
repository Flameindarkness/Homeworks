#include<iostream>
#include <iomanip>
#include <cmath>
int main()
{

	setlocale(LC_ALL, "Rus");
	int d, m,y,a,b,r,coun=0;
	std::cout << "Вероятность 1/7"<<"\n";
	y = 0;
	r = 0;
	for (int i = 1901; i < 2001; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			a = (14 - j) / 12;
			b = j + 12 * a - 2;
			y = i - a;
			r = (13 + y + y / 4 - y / 100 + y / 400 + 31 * b / 12) % 7;
			if (r == 5)
			{
				coun++;
			}
		}
	}
	std::cout << coun;
	return 0;
}