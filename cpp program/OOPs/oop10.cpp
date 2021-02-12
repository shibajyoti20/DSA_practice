//Dectructors in a class.

#include<iostream>
#include<string>

using namespace std;

class sapiens{
    public:
        sapiens(){
            cout<<"Constructor initialized"<<endl;
        }

        ~sapiens(){
            cout<<"Destructor initialized"<<endl;
        }
};


int main(){
sapiens *shiba;
shiba = new sapiens();
delete shiba;
return 0;
}
