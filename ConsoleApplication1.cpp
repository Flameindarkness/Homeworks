#include<iostream>
#include <iomanip>
#include <cmath>
int main()
{

	setlocale(LC_ALL, "Rus");
	int x, c, R, i;
	long double s;
	s = 0;
	std::cout << "Введите количество необходимых для вывода цифр после запятой(не больше 8):";
	std::cin >> x, R;
	for (i = 1; i < 1000000000; i++)
	{
		if (pow(rand(R), 2) + pow(rand(R), 2) <= R)
		{
			s += 1;
		}
	}
	std::cout << std::setprecision(x + 1) << (s / i) * 4;
	return 0;
}