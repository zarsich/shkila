//
// Created by Arsewa on 11.10.25.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Введите дроби в виде a/b@c/d (@ - символ операции):" << endl;

    float a, b, c, d;
    char slash, oper;

    cin >> a >> slash >> b >> oper >> c >> slash >> d;

    if (oper == '+') {
        cout << (a * d + b * c) << '/' << b * d << " = " << (a * d + b * c) / (b * d) << endl;
    }
    else if (oper == '-') {
        cout << (a * d - b * c) << '/' << b * d << " = " << (a * d - b * c) / (b * d) << endl;
    }
    else if (oper == '*') {
        cout << a * c << '/' << b * d << " = " << a * c / b / d << endl;
    }
    else if (oper == '/') {
        cout << a * d << '/' << b * c << " = " << a * d / b / c << endl;
    }

}