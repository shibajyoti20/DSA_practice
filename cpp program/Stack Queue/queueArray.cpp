#include<iostream>
using namespace std;

class queue
{
    
    int* arr; int front; int back;int n=20;

    public:
        queue()
        {;
            arr=new int[n], front = -1, back = -1;
        }

        void push(int x)
        {
            if(back==n-1)
            {
                cout<<"Queue filled"<<endl;
                return;
            }
            back++;
            arr[back]=x;
            if(front==-1)
            {
                front++;
            }
        }

        void pop()
        {
            if(front==-1 || front>back)
            {
                cout<<"Empty queue"<<endl;
                return ;
            }
            front++;

        }

        int peek()
        {
            if(front==-1 || front>back){
                cout<<"Empty queue"<<endl;
                return -1;
            }

            return arr[front];
        }

        bool empty()
        {
            if(front==-1 || front>back){
                cout<<"Queue is empty"<<endl;
                return true;
            }
            return false;
        }

};

int main()
{
    queue q;
    for(int i=10;i<18;i++){
        q.push(i);
    }
    for(int i=0;i<8;i++){
        cout<<q.peek()<<" ";
        q.pop();
    }
    cout<<endl;
    q.empty();
    return 0;
}
