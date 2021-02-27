//This program shows use of VIRTUAL keyword and overriding
//methods in a class. 
#include<iostream>
#include<string>
using namespace std;

class person
{
public:
    virtual void intro()
    {
        cout<<"This is person"<<endl;
    }
};

class Farmer:public person
{
private:
    int savings;
public:
    Farmer(const int& isave)
    {
        savings=isave;
    }
    void intro() override
    {
        cout<<"This is a farmer and he has "<<savings<<" Rs in his bank account"<<endl;
    }
};

class student:public person
{
    private:
        string name;
    public:
        student(const string& iname)
        {
            name=iname;
        }
        void intro()
        {
            cout<<"This is a student named "<<name<<endl;
        }
};


void print(person* p)
{
    p->intro();
}

int main()
{
    person* p=new person();
    print(p);

    student* s=new student("Shibajyoti");
    print(s);

    Farmer* f=new Farmer(56);
    print(f);
    return 0;
}


