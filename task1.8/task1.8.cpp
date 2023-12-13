#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main() {
    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Розмір таблиці Піфагора (можна змінити за потребою)
    const int tableSize = 10;

    // Виведення заголовка таблиці
    std::cout << "Таблиця Піфагора:\n";

    // Виведення верхнього рядка з номерами стовпців
    std::cout << std::setw(4) << " ";
    for (int j = 1; j <= tableSize; ++j) {
        std::cout << std::setw(4) << j;
    }
    std::cout << "\n----------------------------------------\n";

    // Виведення тіла таблиці
    for (int i = 1; i <= tableSize; ++i) {
        // Виведення номера рядка
        std::cout << std::setw(2) << i << " |";

        // Виведення результатів множення
        for (int j = 1; j <= tableSize; ++j) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << "\n";
    }

    return 0;
}

