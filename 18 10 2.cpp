#include<iostream>
#include <iomanip>
#include <cmath>
int main()
{

	setlocale(LC_ALL, "Rus");
	int x, s,coun,r,c,del;
	coun = 0;
	c = 0;
	char ch;
	std::cout << "Введите число и нужную систему счисления:";
	std::cin >> x>>s;
	r = x;
	while (r > 0)
	{
		r /= s;
		coun++;
	}
	del = coun;
	for (int i = 0; i < del; i++)
	{
		c = ((x / (pow(s, (coun - 1)))));
		if (c % s < 10)
		{
			std::cout << (c % s);
		}
		else
		{
			std::cout << char((c % s)-10 + 'A');
		}
		coun--;
	}
	return 0;
}