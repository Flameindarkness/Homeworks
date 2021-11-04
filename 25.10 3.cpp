#include<iostream>
#include <iomanip>
#include <cmath>
int main()
{

	setlocale(LC_ALL, "Rus");
	int k,r=0,e=0,i=0;
	std::cin >> k;
	r = k;
	for (i = 1; i <= k; i++)
	{
		if (r <= pow(i, i))
		{
			break;
		}
		r -= (i*i);
		e += i;
	}
	std::cout << e<<" "<<r<<std::endl;
	while (r > i)
	{
		r -= i;
		e += 1;
	}
	std::cout << e+1 << " " << r;
	return 0;
}