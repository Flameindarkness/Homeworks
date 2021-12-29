#include <iostream>
void GetMatr(double** mas, double** p, double i, double j, double m) {
    int ki, kj, di, dj;
    di = 0;
    for (ki = 0; ki < m - 1; ki++) {
        if (ki == i) di = 1;
        dj = 0;
        for (kj = 0; kj < m - 1; kj++) {
            if (kj == j) dj = 1;
            p[ki][kj] = mas[ki + di][kj + dj];
        }
    }
}
double Det(double** mas, double m) {
    int i, j, d, k, n;
    double** p;
    p = new double* [m];
    for (i = 0; i < m; i++)
        p[i] = new double[m];
    j = 0; d = 0;
    k = 1;
    n = m - 1;
    if (m < 1) std::cout << "Определитель вычислить невозможно!";
    if (m == 1) {
        d = mas[0][0];
        return(d);
    }
    if (m == 2) {
        d = mas[0][0] * mas[1][1] - (mas[1][0] * mas[0][1]);
        return(d);
    }
    if (m > 2) {
        for (i = 0; i < m; i++) {
            GetMatr(mas, p, i, 0, m);
            d = d + k * mas[i][0] * Det(p, n);
            k = -k;
        }
    }
    for (int i = 0; i < m; ++i) delete[] p[i];
    delete[] p;
    return(d);
}
int main() {
    int m, i, j;
    double d;
    double** mas;
    system("chcp 1251");
    system("cls");
    std::cout << "Введите размерность квадратной матрицы: ";
    std::cin >> m;
    mas = new double* [m];
    for (i = 0; i < m; i++) {
        mas[i] = new double[m];
        for (j = 0; j < m; j++) {
            std::cin >> mas[i][j];
        }
    }
    d = Det(mas, m);
    std::cout << "Определитель матрицы равен " << d;
    std::cin.get(); std::cin.get();
    for (int i = 0; i < m; ++i) delete[] mas[i];
    delete[] mas;
    return 0;
}
