#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number = 10;  // обчислюємо факторіал числа 10
    int factorial = 1;

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    cout << "Факторіал числа " << number << " дорівнює " << factorial << endl;

    return 0;
}