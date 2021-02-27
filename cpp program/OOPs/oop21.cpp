#include<iostream>
#include<string>
using namespace std;

class person
{
    public:
        virtual void intro()=0;
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
            cout<<"Name of this student is "<<name<<endl;
        }
};


class farmer:public person
{
    private:
        int savings;
    public:
        farmer(const int& isave)
        {
            savings=isave;
        }
        void intro()
        {
            cout<<"This farmer has "<<savings<<" rs"<<endl;
        }
};


void print(person* p)
{
    p->intro();
}

int main()
{
    person* p=new student("Alex");
    print(p);

    student* s=new student("Shibalord");
    print(s);

    farmer* f = new farmer(1000);
    print(f);
    return 0;
}

