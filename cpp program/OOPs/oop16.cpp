//This program demonstrates the concepts of Constructors(copy& Parametarized) and also the concepts of opeartor overloading.

#include<iostream>
#include<string>
using namespace std;

class student
{
    public:
        string name;
        int age;
        string gender;
        
        student()
        {
            cout<<"Default Constructor"<<endl;
        }

        student(string s,int a,string g)
        {
            cout<<"Parametarized Constructor"<<endl;
            name=s;
            age=a;
            gender=g;
            cout<<name<<" "<<age<<" "<<gender<<endl;
        }

        student(student &a)
        {
            cout<<"Copy constructor"<<endl;
            name=a.name;
            age=a.age;
            gender=a.gender;
            cout<<name<<" "<<age<<" "<<gender<<endl;
        }

        ~student()
        {
            cout<<"Destructor called"<<endl;
        }

        bool operator == (student &a)
        {
            if(name==a.name && age==a.age && gender==a.gender)
            {
                return true;
            }
            return false;
        }


};
int main()
{

    student b;
    student a("Shiba",25,"male");
    student c("Anita",56,"female");
    student d=c;

    if(c==a)
    {
        cout<<"Same instances"<<endl;
    }
    else
    {
        cout<<"Unequal instances"<<endl;
    }
    return 0;
}
