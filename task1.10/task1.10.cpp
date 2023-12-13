#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Введення суми коштів з клавіатури
    std::cout << "Введіть суму коштів в гривнях: ";
    double amount;
    std::cin >> amount;

    // Перевірка на введення неправильної суми
    if (std::cin.fail() || amount < 0) {
        std::cerr << "Помилка введення. Будь ласка, введіть додатню суму коштів.\n";
        return 1; // Повернення коду помилки
    }

    // Переведення суми в кількість копійок для уникнення проблем з плаваючою точкою
    int totalCents = static_cast<int>(amount * 100);

    // Ініціалізація змінних для підрахунку кількості монет
    int coins1 = 0, coins2 = 0, coins5 = 0;

    // Розрахунок кількості монет
    while (totalCents > 0) {
        if (totalCents >= 500) {
            totalCents -= 500;
            coins5++;
        }
        else if (totalCents >= 200) {
            totalCents -= 200;
            coins2++;
        }
        else {
            totalCents -= 100;
            coins1++;
        }
    }

    // Виведення результату
    std::cout << "Мінімальна кількість монет:\n";
    std::cout << "1 гривня: " << coins1 << " монет\n";
    std::cout << "2 гривні: " << coins2 << " монет\n";
    std::cout << "5 гривень: " << coins5 << " монет\n";

    return 0;
}
