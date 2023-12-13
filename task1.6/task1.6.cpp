#include <iostream>
#include <Windows.h>
using namespace std;

// Функція для обчислення НСД
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Введення двох цілих чисел з клавіатури
    int num1, num2;
    std::cout << "Введіть перше ціле число: ";
    std::cin >> num1;

    std::cout << "Введіть друге ціле число: ";
    std::cin >> num2;

    // Обчислення та виведення НСД
    int gcd = findGCD(num1, num2);
    std::cout << "Найбільший спільний дільник: " << gcd << "\n";

    return 0;
}
//У цій програмі використовується алгоритм Евкліда для знаходження НСД. Користувач вводить два цілих числа, а програма виводить їхній найбільший спільний дільник.
