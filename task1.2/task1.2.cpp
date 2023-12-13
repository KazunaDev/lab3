#include <iostream>
#include <Windows.h>  
#include <cmath> 
using namespace std;

int main() {
    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N;
    cout << "Введіть кількість членів прогресії (N): ";
    cin >> N;

    // Арифметична прогресія
    int firstTermArithmetic, commonDifferenceArithmetic;
    cout << "Введіть перший член арифметичної прогресії: ";
    cin >> firstTermArithmetic;
    cout << "Введіть різницю арифметичної прогресії: ";
    cin >> commonDifferenceArithmetic;

    int sumArithmetic = 0;
    int i = 1;
    while (i <= N) {
        sumArithmetic += firstTermArithmetic + (i - 1) * commonDifferenceArithmetic;
        i++;
    }
    cout << "Сума перших " << N << " членів арифметичної прогресії: " << sumArithmetic << endl;

    // Геометрична прогресія
    int firstTermGeometric, commonRatio;
    cout << "Введіть перший член геометричної прогресії: ";
    cin >> firstTermGeometric;
    cout << "Введіть знаменник геометричної прогресії: ";
    cin >> commonRatio;

    int sumGeometric = 0;
    i = 0;
    while (i < N) {
        sumGeometric += firstTermGeometric * pow(commonRatio, i);
        i++;
    }
    cout << "Сума перших " << N << " членів геометричної прогресії: " << sumGeometric << endl;

    return 0;
}

