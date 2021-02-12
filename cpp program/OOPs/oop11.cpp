#include <iostream>
#include<string>

using namespace std;

class hitler
{
    private:
        int *age;
        string *name;

    public:
        hitler(string iname, int iage)
        {
            name= new string;
            age= new int;

            *name = iname;
            *age = iage;
        }

        void display()
        {
            cout<<"This is "<<*name<<" and i am "<<*age<<" years old"<<endl;
        }

        ~hitler(){
            delete name;
            delete age;
            cout<<"Memory deallocated"<<endl;
        }

};

int main()
{
    hitler *adolf = new hitler("Adolf",45);
    adolf->display();
    delete adolf;
    return 0;
}
