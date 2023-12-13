#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Розмір таблиці множення (можна змінити за потребою)
    const int tableSize = 10;

    // Виведення заголовка таблиці
    std::cout << "Таблиця множення:\n";

    // Зовнішній цикл для множення чисел від 1 до tableSize
    for (int i = 1; i <= tableSize; ++i) {
        // Внутрішній цикл для множення на числа від 1 до tableSize
        for (int j = 1; j <= tableSize; ++j) {
            // Виведення результату множення
            std::cout << i * j << "\t";
        }
        // Перехід на новий рядок після завершення внутрішнього циклу
        std::cout << "\n";
    }

    return 0;
}

