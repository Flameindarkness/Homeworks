#include<iostream>
#include <iomanip>
#include <cmath>
int main()
{

	setlocale(LC_ALL, "Rus");
	int x, c, i, f;
	long double s;
	s = 0;
	c = 0;
	f = 0;
	std::cout << "Введите количество необходимых для вывода цифр после запятой(не больше 8):";
	std::cin >> x;
	for (i = 1; i < 1000000; i++)
	{
		c = pow(rand(), 2);
		f = pow(rand(), 2);
		if ((c + f) < pow(32768, 2))
		{
			s += 1;
		}
	}
	std::cout << std::setprecision(x + 1) << ((s / i) * 4);
	return 0;
}