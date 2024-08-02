#include<bits/stdc++.h>
using namespace std;
class graph{
    public:

    unordered_map<int,list<pair<int,int>>>adj;

    void add_edge(int u,int v,int weight)
    {
        adj[u].push_back(make_pair(v,weight));
        adj[v].push_back(make_pair(u,weight));
    }

    void print_edge()
    {
        for(auto i:adj)
        {
            cout<<i.first<<"->";
            for(auto j :i.second)
                cout<<"["<<j.first<<","<<j.second<<"],";
            cout<<endl;
        }
        
    }
}


int main()
{
    graph g;
    g.add_edge(0,1,5);
    g.add_edge(0,2,8);
    g.add_edge(2,1,9);
    g.add_edge(2,3,6);
    g.add_edge(3,1,2);


    g.print_edge();
}