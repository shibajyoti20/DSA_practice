#include<iostream>
using namespace std;

int main()
{
    int h,m;
    const char *hour[12]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
    const char *min[30]={"one","two","three","four","five"."six","seven","eight","nine","ten",
         "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty",
         "twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine","thirty"};
    
    cin >> h;
    cin >> m;

    if (m==0)
        cout<<hour[h-1]<<"o'clock";
    
    elif(0<m<30 && m!=15)
        cout<<min[m-1]<<"past"<<hour[h-1];
    
    elif(m==15)
        cout<<"quarter past"<<hour[h-1];
    
    elif(30<m<60 && m!=45)
        cout<<min[60-m-1]<<"to"<<hour[h-1];
    
    elif(m==45)
        cout<<"quarter to"<<hour[h-1];
    
    else
        cout<<"half past"<<hour[h-1];
    
    return 0;
}
