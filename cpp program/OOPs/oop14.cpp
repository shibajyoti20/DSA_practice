//This program shows the use of friend class.

#include<iostream>
#include<string>
using namespace std;

class Hitler
{
    private:
        string name;
        int age;

    public:
        Hitler(string jname, int jage)
        {
            name = jname;
            age = jage;
        }

        void tellme()
        {
            cout<<name<<endl<<age<<endl;
        }
    friend void display(Hitler hero);
};

void display(Hitler hero)
{
    cout<<hero.name<<endl<<hero.age<<endl;
}

int main()
{
    Hitler adolf("Adolf",45);
    display(adolf);

    return 0;
}
