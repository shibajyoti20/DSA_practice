//This program shows the concept of Polymorphism.
#include<iostream>
using namespace std;

class base
{
    public:
        virtual void print()
        {
            cout<<"This is the print function of the base class"<<endl;
        }
        virtual void disp()
        {
            cout<<"This is the display function of the base class"<<endl;
        }
};

class derived : public base
{
    public:
        void print()
        {
            cout<<"This is the print function of the derived class"<<endl;
        }
        void disp()
        {
            cout<<"This is the display function of the derived class"<<endl;
        }
};

int main()
{
    base *ptr;
    derived obj;
    //ptr = &obj;

    ptr -> print();
    ptr -> disp();
    return 0;
}
