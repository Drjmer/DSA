


#include <bits/stdc++.h>
using namespace std;
class Graph{
    public:
  //create an adjaceny list
    unordered_map<int,list<pair<int,int>>>adj;
  
//parameteriseed constructor
    void add_Edge(int u,int v,int weight)
    {
        pair<int,int>p=make_pair(v,weight);
        adj[u].push_back(p);
    }
    
    //print_adjaceny matrix
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
    
    void dfs(unordered_map<int,bool>&visited,stack<int>&topo,int node)
    {
        visited[node]=true;
        for(auto neighbour: adj[node])
        {
            if(!visited[neighbour.first])
            {
                dfs(visited,topo,neighbour.first);
            }
        }
        topo.push(node);
    }
    
    
};
int main() {
    // Write C++ code here
    Graph g;
    g.add_Edge(0,1,5);
    g.add_Edge(0,2,3);
    g.add_Edge(1,2,2);
    g.add_Edge(1,3,6);
    g.add_Edge(2,3,7);
    g.add_Edge(2,4,4);
    g.add_Edge(2,5,2);
    g.add_Edge(3,4,-1);
    g.add_Edge(4,5,-2);
    
    g.print_edge();
    
    unordered_map<int,bool>visited;
    stack<int>topo;
    int n=6 ; //no. of nodes
    for(int i=0;i<6;i++)
    {
        if(!visited[i])
        g.dfs(visited,topo,i);
    }
    
    vector<int>dist(n);
    for(int i=0;i<n;i++) dist[i]=INT_MAX;
    int src_node=1;
    
    dist[src_node]=0;
    
    while(!topo.empty())
    {
        int top=topo.top();
        topo.pop();
        
        if(dist[top]!=INT_MAX)
        {
            for(auto neighbour: g.adj[top])
            {
                if(dist[top]+neighbour.second<dist[neighbour.first])
                {
                    dist[neighbour.first]=dist[top]+neighbour.second;
                }
            }
        }
    }
    
    cout<<endl;
    for(int i=0;i<n;i++) cout<<dist[i]<<" ";
    
    return 0;
}