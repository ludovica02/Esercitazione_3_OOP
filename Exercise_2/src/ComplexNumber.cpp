#include "ComplexNumber.hpp"

using namespace std;

namespace ComplexNumberLibrary{

ComplexNumber ComplexNumber::to_conjugate()
{
    ComplexNumber c(real, -imag);
    return c;
}

ostream& operator<<(ostream& os, const ComplexNumber &c)
{
    if(abs(c.imag) < 1.1e-16)
        if(abs(c.real) < 1.1e-16)
            os << 0;
        else
            os << c.real;
    else if(abs(c.real) < 1.1e-16 && abs(c.imag) > 1.1e-16)
        os << c.imag << "i";
    else if(c.imag > 1.1e-16)
        os << c.real << "+" << c.imag << "i" << endl;
    else
        os << c.real << c.imag << "i";
    return os;
}

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2)
{
    ComplexNumber c(c1.real + c2.real, c1.imag + c2.imag);
    return c;
}

ComplexNumber operator+(const double &c1, const ComplexNumber &c2)
{
    ComplexNumber c(c1 + c2.real, c2.imag);
    return c;
}

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2)
{
    return (abs(c1.real-c2.real) < 1.1e-16 && abs(c1.imag-c2.imag) < 1.1e-16);
}

}
