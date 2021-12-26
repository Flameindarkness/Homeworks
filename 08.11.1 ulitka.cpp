#include <iostream>


int main()
{
	int  row, col,k=1;
	std::cin >> row >> col;
	int **A = new int *[row];
	for (int  i = 0; i < row; ++i) { A[i] = new int[col]; }
	int cb = 0, ce = col-1, rb = 0, re = row - 1, n = 0, m = 0;
	A[0][0] = k;
	for (; rb <= re;) {
		for (; n < ce;){if(k<=row*col) A[m][++n] = ++k;}
		++rb;
		for (; m < re;){if(k<=row*col) A[++m][n] = ++k;}
		--ce;
		for (; n > cb;){if(k<=row*col) A[m][--n] = ++k;}
		--re;
		for (; m > rb;){if(k<=row*col) A[--m][n] = ++k;}
		++cb;
	}
	A[m][n] = k;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			if(j!=col-1)
			std::cout << A[i][j] << ' ';
			else
			std::cout << A[i][j]<<std::endl;
		}
	}
	for (int i = 0; i < row; ++i) delete[] A[i];
	delete[] A;
	return 0;
}
