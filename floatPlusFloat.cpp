//
// Created by Arsewa on 11.10.25.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Введите дроби в виде a/b:" << endl;

    float a, b, c, d;
    char slash;

    cin >> a >> slash >> b;
    cin >> c >> slash >> d;

    cout << (a * d + b * c) << '/' << b * d << " = " << (a * d + b * c) / (b * d) << endl;
}