#include<iostream>
#include <iomanip>
#include <cmath>
int main()
{

	setlocale(LC_ALL, "Rus");
	int x, coun, max;
	coun = 0;
	max = 0;
	std::cout << "Введите исходное число>0:";
	std::cin >> x;
	while (x > 1)
	{
		if (x % 2 == 0)
		{
			x/= 2;
			coun++;
		}
		else
		{
			x *= 3;
			x += 1;
			coun++;
		}
		if (x > max)
		{
			max = x;
		}
	}
	std::cout << max<<" " << coun;
	return 0;
}