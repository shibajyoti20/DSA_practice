#include <iostream>

using namespace std;



int main()
{
    int n,i;
    char arr[9] = ["one","two","three","four","five","six","seven","eight","nine"];
    cin >> n;
    if(n>=1 && n<=9){
        for(i=0;i<=8;i++){
                if(n=(i+1)){
                    cout<<arr[i];
                }
            }
    }
    else{
        cout<<"Greater than 9";
    }
    return 0;
}
    

    


