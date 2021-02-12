#include <algorithm>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "freinjecnuefhwdniweo";
    cout<<str<<endl;
    
    //converting into upper case.
    
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;

    string str2 = "NDXIEHDIQNDSWJDWXDMI";
    cout<<str2<<endl;

    //converting to lower case.
    for(int i=0;i<=str2.size();i++)
    {
        if (str2[i]>='A' && str2[i]<='Z')
        {
            str2[i]+=32;
        }
    }
    cout<<str2<<endl;

    // converting using in-built functions.
    string str3="xbywegrxbwrbhin";
    transform(str3.begin(),str3.end(),str3.begin(),::toupper);
    cout<<str3<<endl;

    //making the greatest number from the given numerical string.
    string str4="452736";
    sort(str4.begin(),str4.end(),greater<int>());
    cout<<str4<<endl;
    return 0;
}
