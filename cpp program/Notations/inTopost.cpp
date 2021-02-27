#include<iostream>
#include<stack>
using namespace std;

int prec(char c){
    if(c=='^'){
        return 3;
    }
    if(c=='*' || c=='/'){
        return 2;
    }
    if(c=='+' || c=='-'){
        return 1;
    }
    return -1;
}

string inToPost(string s)
{
    stack<char>str;
    string res;
    for(int i=0;i<s.length()-1;i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            res+=s[i];
        }

        else if(s[i]=='(')
        {
            str.push(s[i]);
        }
        else if(s[i]==')')
        {
            while(!str.empty() && s[i]!='(')
            {
                res+=str.top();
                str.pop();
                i++;
            }
            if(!str.empty())
            {
                str.pop();
            }
        }

        else{
            while(!str.empty() && prec(str.top())>prec(s[i]))
            {
                res+=str.top();
                str.pop();
            }
            str.push(s[i]);
        }
    }

    while(!str.empty())
    {
        res+=str.top();
        str.pop();
    }


    return res;
}


int main()
{
    string s = "(a-b/c)*(a/k-l)";
    cout<<inToPost(s)<<endl;

    return 0;
}
