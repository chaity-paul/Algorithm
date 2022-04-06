#include<bits/stdc++.h>
using namespace std;
vector<bool> visited(100, 0);
vector<int> edge[100];
void dfs(int x)
{
    if(visited[x])
        return;
    visited[x] = 1;
    cout<<x<<' ';
    for(auto i: edge[x])
    {
        if(!visited[i])
            dfs(i);
    }
}
int main()
{
    int n,m,n1,n2;
    cin>>n>>m; 
    for(int i = 0; i < m; i++)
    {
        cin>>n1>>n2;
        edge[n1].push_back(n2);
        edge[n2].push_back(n1);
    }
    int x;
    cout<<"Enter the starting node : "<<endl;
    cin>>x;
    dfs(x);
}