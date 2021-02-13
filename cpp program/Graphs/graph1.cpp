#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    bool isCyclicRec(int V, bool visted[],bool *rs);

    public:
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};

Graph::Graph(int V)
{
    this->V;
    adj=new list<int>[V];
}

void Graph:: addEdge(int v, int w)
{
    adj[v].push_back(w);
}

bool Graph::isCyclicRec(int v, bool visited[], bool *rs)
{
    if(!visited[v])
    {
        visited[v]=true;
        rs[v]=true;
        
        list<int>::iterator i;
        for(i =adj[v].begin();i!=adj[v].end();++i)
        {
            if(!visited[*i] && isCyclicRec(*i,visited,rs))
            {
                return true;
            }
            else if(rs[*i])
            {
                return true;
            }
        }
    }
    rs[v]=false;
    return false;
}

bool Graph::isCyclic()
{
    bool * visited=new bool[V];
    bool * rs=new bool[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
        rs[i]=false;
    } 
    for(int i=0;i<V;i++)
    {
        if(isCyclicRec(V,visited,rs))
        {
            return true;
        }
    }
    return false;
}


int main()
{
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);

    if(g.isCyclic())
    {
        cout<<"The graph has a cycle"<<endl;
    }
    else{
        cout<<"The graph doesn't has a cycle"<<endl;
    }
    return 0;
}

