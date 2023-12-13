#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Виведення заголовка таблиці
    std::cout << "x\t|\ty=x^2\n";
    std::cout << "----------------\n";

    // Розмір таблиці (можна змінити за потребою)
    int tableSize = 10;

    // Цикл для обчислення та виведення значень функції
    for (int x = 0; x <= tableSize; ++x) {
        int y = x * x;
        std::cout << x << "\t|\t" << y << "\n";
    }

    return 0;
}

