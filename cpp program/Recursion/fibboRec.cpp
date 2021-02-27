#include<iostream>
using namespace std;

class fibbo{
    public:
        void fibboRec(long long n){
            int f[n+2];
            int i;
            f[0]=0;
            f[1]=1;
            cout<<f[0]<<" "<<f[1]<<" ";
            for(i=2;i<n;i++){
                f[i]=f[i-1]+f[i-2];
                cout<<f[i]<<" ";
            }
            cout<<endl;
        }
};


int main(){
    fibbo res;
    long long n;
    cin>>n;

    res.fibboRec(n);
    return 0;

}
