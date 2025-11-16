#define _USE_MATH_DEFINES
#include <iostream>
#include <format>
#include <cmath>

using namespace std;

//функція, яка виконує обчислення
double f(double x) {
    return sin(8.0/63.0) - ( (6*M_PI)/(45*M_E) ) * ( 4.0/((x+3)*(x-8)) ) + 10*cos(x-9) + 1.0/sqrt(x+6);
}

// перевірка області визначення функції
bool CheckOfX(double x) {
    return (x != -3.0) && (x != 8.0) && (x >= -6.0);
}

// функція, яка показує результат на екрані
void ShowOutput(double x, double result, bool correct) {
    cout << format("for x = {:.7f}\n", x);
    
    if (correct)
        cout << format("result = {:.8f}\n", result);
    else
        cout << "result = undefined\n";
}


int main() {
    cout << "Author of this project is Anna Ferima. Group K-14. Variant 73." << endl;
    cout << "This program calculates the expression f(x) by entered x." << endl;

    double x;
    cout << "Enter x (Hint: x must not be equal to -3 and 8, and bigger than -6): ";
    cin >> x;

    if (cin.fail()) {
        cout << "wrong input" << endl;
        return 0;
    }

    cout << "***** do calculations ..." << endl;
    bool correct = CheckOfX(x);
    double res = 0.0;

    if (correct) 
        res = f(x);

        cout << "done" << endl;
        ShowOutput(x, res, correct);

 return 0;

}