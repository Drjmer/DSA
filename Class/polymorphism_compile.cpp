#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    // This is automatically called when '+' is used with between two Complex objects 
    //syntax return_type operator () 
    Complex operator+(Complex const &b)// a is already called
    {
        Complex a;
        a.real = this->real + b.real;
        a.imag = this->imag + b.imag;
        return a;
    }
    void print() { cout << real << " + i" << imag << endl; }
};
int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    // An example call to "operator+" 
    c3.print();
}

