#include "src/ComplexNumber.hpp"
#include <iostream>

using namespace std;
using namespace ComplexNumberLibrary;

int main()
{
    ComplexNumber c;

    cout << "default: " << c << endl;

    ComplexNumber c1(1, 2);

    cout << "c1: " << c1 << endl;

    ComplexNumber c2(2, -3.00000000000000012);
    ComplexNumber sum = c1 + c2;

    cout << "sum: " << sum << endl;

    if(c1==c2)
        cout << "numbers are equal" << endl;
    else
        cout << "numbers are not equal" << endl;

    ComplexNumber c3(2, -3.00000000000000013);

    if(c2==c3)
        cout << "numbers are equal" << endl;
    else
        cout << "numbers are not equal" << endl;

    cout << 1.5 + c2 << endl;
    ComplexNumber con = 4.7 + c2.to_conjugate();

    cout << "sum of conjugate and double: " << con << endl;

    return 0;
}
