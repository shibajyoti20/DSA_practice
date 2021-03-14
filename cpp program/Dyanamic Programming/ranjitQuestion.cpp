#include<iostream>
#include<iterator>
#include<set>
#include<ostream>

using namespace std;

bool isSummable(int Z,set<int, greater<int>> s1,int vis[]);

int main()
{
        int n, el, z, i;
        set<int, greater<int> > s1;
        cout<< "Enter Number of Set Element: ";
        cin >> n;
        int * vis = new int[n]();
        for(i = 0; i<n; i++)
        {
            cin >> el;
            s1.insert(el);
            s1.insert(-el);
        }                                                
        cout<< "Enter Value of Z: ";
        cin >> z;
        cout<< "Result: " << isSummable(z, s1,vis) << endl;
        return 0;
}


bool isSummable(int Z, set<int, greater<int> > s1,int vis[]) 
{
        if(Z == 0) return true;
        
        set<int, greater<int> >::iterator itr;
        int index =0;
        for(itr = s1.begin(); itr != s1.end(); itr++)
        {
            if(Z-(*itr)>=0 && vis[index]!=1)
            {
                vis[index]=1;
                if(isSummable(Z-(*itr),s1,vis)) return true;

            }
            index++;
        }
        return false;
}
