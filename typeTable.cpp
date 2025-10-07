//
// Created by Arsewa on 7.10.25.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(15) << "type" << setw(15) << "size"
    << setw(15) << "min_value" << setw(15) << "max_value"
    << endl;

    cout << setw(15) << "char"
    << setw(15) << sizeof(char)
    << setw(15) << static_cast <int> (numeric_limits<char>::min())
    << setw(15) << static_cast <int> (numeric_limits<char>::max())
    << endl;

    cout << setw(15) << "int"
    << setw(15) << sizeof(int)
    << setw(15) << numeric_limits<int>::min()
    << setw(15) << numeric_limits<int>::max()
    << endl;

    cout << setw(15) << "unsigned int"
    << setw(15) << sizeof(unsigned int)
    << setw(15) << numeric_limits<unsigned int>::min()
    << setw(15) << numeric_limits<unsigned int>::max()
    << endl;

    cout << setw(15) << "float"
    << setw(15) << sizeof(float)
    << setw(15) << numeric_limits<float>::min()
    << setw(15) << numeric_limits<float>::max()
    << endl;

    cout << setw(15) << "double"
    << setw(15) << sizeof(double)
    << setw(15) << numeric_limits<double>::min()
    << setw(15) << numeric_limits<double>::max()
    << endl;
}