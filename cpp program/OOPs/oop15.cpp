//This program shows the concept of Inheritance.

#include<iostream>
#include<string>
using namespace std;

class person
{
    public:
        int age;
        string name;
        void setN(string iname)
        {
            name=iname;
        }
        
        void setA(int iage)
        {
            age=iage;
        }
};

class student : public person
{
    public:
        int id;
        void SetI(int iid)
        {
            id =iid;
        }
        
        void display()
        {
            cout<<"Hi i am "<<name<<", my age is "<<age<<" and student ID is "<<id<<endl;
        }
};
                
int main()
{
    student Shiba;
    Shiba.setN("Shiba");
    Shiba.SetI(12973);
    Shiba.setA(21);

    Shiba.display();
    return 0;
}
