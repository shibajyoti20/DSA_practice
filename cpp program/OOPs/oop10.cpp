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


void function()
{
    sapiens shiba;
}

int main(){
//sapiens *shiba;
//sapiens shiba;
//shiba = new sapiens();
//delete shiba;
function();
return 0;
}
