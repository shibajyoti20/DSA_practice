#include<iostream>
using namespace std;

class Complex
{
    private:
        int real, imag;
    public:
        Complex(int r,int i)
        {
            real=r;
            imag=i;
        }
       
       Complex operator + (Complex const &a)
       {
           Complex res;
           res.imag = imag + a.imag;
           res.real = real + a.real;
           return res;
       } 

       void display()
       {
           cout<<real<<" + i"<<imag<<endl;
       }
};

int main()
{
    Complex c1(3,8);
    Complex c2(4,9);
    Complex c3 = c1+c2;
    c3.display();
    return 0;
}
