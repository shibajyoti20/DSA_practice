#include<iostream>
using namespace std;

void tower_hanoi(int n,char from_rod,char aux_rod,char to_rod)
{
    if(n==1)
    {
        cout<<"Move disk from rod "<<from_rod<<" to rod "<<to_rod<<endl;
        return;
    }
    tower_hanoi(n-1,from_rod,to_rod,aux_rod);
    cout<<"Move disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<endl;
    tower_hanoi(n-1,aux_rod,from_rod,to_rod);
}

int main()
{
    int n;
    cout<<"Enter the number of rods ";
    cin>>n;
    tower_hanoi(n,'A','B','C');
    return 0;
}
