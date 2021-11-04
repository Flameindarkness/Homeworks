#include<iostream>
#include <iomanip>
#include <cmath>
int main()
{

	setlocale(LC_ALL, "Rus");
	int x, c;
	long double s, s1;
	c = 0;
	s = 0;
	s1 = 0;
	std::cout << "Введите количество необходимых для вывода цифр после запятой(не больше 8):";
	std::cin >> x;
	for (int i = 1; i < 1000000000; i += 2)
	{
		if (c % 2 == 0)
		{
			s += 4 * (long double(1.0) / i);
		}
		else
		{
			s -= 4 * (long double(1.0) / i);
		}
		c += 1;
	}
	std::cout << std::setprecision(x + 1) << s;
	return 0;
}