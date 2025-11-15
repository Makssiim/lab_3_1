// Lab_03_1.cpp 
// < Проць Максим > 
// Лабораторна робота № 3.1 
 // Розгалуження, задане формулою: функція однієї змінної. 
 // Варіант 24
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "x = ";
    cin >> x;

    // --- Повна форма if–else ---
    if (x <= -1) {
        y = x + log10(fabs(cos(5 * x))) + exp(1.0 / x + x);
    }
    else if (x < 0.4) {
        y = x + sqrt(pow(2 - x, 3)) - tan(x);
    }
    else {
        y = x + sin(5 * x) - sqrt(fabs(1 - x));
    }

    cout << "y (через if-else) = " << y << endl;

    // --- Скорочена форма (тернарний оператор) ---
    y = x + (
        (x <= -1) ? (log10(fabs(cos(5 * x))) + exp(1.0 / x + x)) :
        ((x < 0.4) ? (sqrt(pow(2 - x, 3)) - tan(x)) :
            (sin(5 * x) - sqrt(fabs(1 - x))))
        );

    cout << "y (через тернарний оператор) = " << y << endl;

    return 0;
}