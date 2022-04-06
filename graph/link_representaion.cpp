#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cout<<"Enter number of nodes and edges :"<<endl;
    cin>>n>>m;
    // vector<int> adj[n];
    // memset(adj, 0, sizeof(adj));
    // adj[1].push_back(2);
    // adj[2].push_back(3);
    // adj[2].push_back(4);
    // adj[3].push_back(4);
    // adj[4].push_back(1);
    // adjacent list
    vector<pair<int, int>> edge[n];
    memset(edge, 0, sizeof(edge));
    edge[1].push_back({2,1});
    edge[2].push_back({3,1});
    edge[3].push_back({4,5});
    edge[4].push_back({2,1});
    edge[5].push_back({5,0});
    for(int i = 0; i < m; i++)
        cout<<edge[2][i]<<' ';
    cout<<endl;
}