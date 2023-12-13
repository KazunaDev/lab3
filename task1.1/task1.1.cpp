#include <iostream>
#include <Windows.h>    
using namespace std;

int main() {
    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;

    while (true) {
        cout << "Введіть число (введіть 0 для виходу): ";
        cin >> number;

        if (number == 0) {
            cout << "Програма завершена";
            break;
        }

        cout << "Ви ввели: " << number << endl;
    }

    return 0;
}

