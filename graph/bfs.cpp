#include<bits/stdc++.h>
using namespace std;
vector<bool> visited(100, 0);
queue<int> q;
vector<int> edge[100];
void bfs(int x)
{
    visited[x] = 1;
    q.push(x);
    while(!q.empty())
    {
        int f = q.front();
        cout<<f<<' ';
        q.pop();
        for(auto i: edge[f])
        {
            if(visited[i])
                continue;
            visited[i]=1;
            q.push(i);
        }
    }
    cout<<endl;
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
    bfs(x);
}