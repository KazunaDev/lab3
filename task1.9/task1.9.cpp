#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Введення числа з клавіатури
    std::cout << "Введіть ціле число: ";
    long long number;
    std::cin >> number;

    // Перевірка на введення неправильного числа
    if (std::cin.fail()) {
        std::cerr << "Помилка введення. Будь ласка, введіть ціле число.\n";
        return 1; // Повернення коду помилки
    }

    // Зберігання оригінального числа для виведення на екран
    long long originalNumber = number;

    // Ініціалізація змінної для суми цифр
    int sumOfDigits = 0;

    // Обчислення суми цифр числа
    while (number != 0) {
        sumOfDigits += number % 10;
        number /= 10;
    }

    // Виведення результату
    std::cout << "Сума цифр числа " << originalNumber << " дорівнює " << sumOfDigits << ".\n";

    return 0;
}
