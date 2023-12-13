#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;
// Варіант13
// Формула члена ряду
double a(int n) {
    return pow(-1, n) * (1 + 3 * n) / pow(3, n);
}

// Підрахунок суми членів ряду
double sum(int n) {
    double s = 0;
    for (int i = 1; i <= n; i++) {
        s += a(i);
    }
    return s;
}

int main() {
    // Кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Підрахунок суми членів ряду з точністю до 0.000001
    double sum_eps = sum(100000);

    // Підрахунок суми перших 10 членів ряду
    double sum_10 = sum(10);

    // Виведення результатів
    cout << "Сума членів ряду з точністю до 0.000001: " << sum_eps << endl;
    cout << "Сума перших 10 членів ряду: " << sum_10 << endl;

    return 0;
}

