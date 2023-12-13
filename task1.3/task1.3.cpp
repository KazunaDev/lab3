#include <iostream>
#include <Windows.h> 
using namespace std;

int main() {
    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N;
    cout << "Введіть кількість натуральних чисел: ";
    cin >> N;

    int sumOfSquares = 0;
    int sumOfCubes = 0;

    for (int i = 1; i <= N; i++) {
        sumOfSquares += i * i; // Додаємо квадрат поточного числа до суми квадратів
        sumOfCubes += i * i * i; // Додаємо куб поточного числа до суми кубів
    }

    cout << "Сума квадратів перших " << N << " натуральних чисел: " << sumOfSquares << endl;
    cout << "Сума кубів перших " << N << " натуральних чисел: " << sumOfCubes << endl;

    return 0;
}
