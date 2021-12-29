#include<iostream>
#include <iomanip>
#include <cmath>
int main()
{

	setlocale(LC_ALL, "Rus");
	int k, r = 0, e = 0, i = 0, c = 0,co=0;
	std::cout << "Введите номер комнаты:";
	std::cin >> k;
	r = k;
	for (i = 1;; ++i)
	{
		r -= i;
		if (r < 0)
			break;
		++e;
		++co;
		if (co != i)
			--i;
		else
			co = 0;
	}
	std::cout << e+1 << " " << r + i;
	return 0;
}
