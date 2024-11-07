#include <bits/stdc++.h>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.

    unordered_map<int,list<pair<int,int>>>adj;

    for(int i=0;i<edges;i++)
    {
        int u=vec[i][0];
        int v=vec[i][1];
        int w=vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));

    }

    vector<int>dist(vertices);
        
    for(int i=0;i<vertices;i++) dist[i]=INT_MAX;

    dist[source]=0;
    set<pair<int,int>>s;
    s.insert(make_pair(dist[source],source));
    while(!s.empty())
    {
        auto front=*(s.begin()); //front-->[distance of node,node name]

        s.erase(s.begin());

        for(auto neighbour: adj[front.second]) //neighbour-->[node name, distance from the adjacent node]
        {
            if(neighbour.second+front.first<dist[neighbour.first])
            {
                //delete the neighboour distance from set and updatw it;
                auto node_delete=s.find(make_pair(dist[neighbour.first],neighbour.first));
                if(node_delete!=s.end())
                s.erase(node_delete);
                dist[neighbour.first]=neighbour.second+front.first;
                s.insert(make_pair(dist[neighbour.first],neighbour.first));

            }
        }
    }
    return dist;
}
