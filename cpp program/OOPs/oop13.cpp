//This program shows the function fo static keyword

#include<iostream>
using namespace std;

class Hitler{
    public:
        static int nazi_count;

        Hitler(){
            nazi_count+=1;
        };
        
        void display()
        {
            cout<<"There are "<<nazi_count<<" nazis there. Beware!"<<endl;
        }

        static void nazi_lives()
        {
            cout<<"There are "<<nazi_count<<" nazis there. Beware!"<<endl;
        }

};

int Hitler :: nazi_count=0;

int main(){
    cout<<Hitler::nazi_count<<endl;

    Hitler adolf;
    Hitler neil;
    Hitler nicholas;
    Hitler thommas;

    adolf.nazi_lives();
    cout<<Hitler::nazi_count<<endl;
    return 0;
}
