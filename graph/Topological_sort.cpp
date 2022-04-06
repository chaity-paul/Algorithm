#include<bits/stdc++.h>
using namespace std;
vector<bool> visited(100, 0);
vector<int> edge[100];
stack<int> s;
void dfs(int x)
{
    if(visited[x])
        return;
    visited[x] = 1;
    for(auto i: edge[x])
        dfs(i);
    s.push(x);
}
void topsort(int n)
{
    for (int i = 1; i <= n; i++) {
        if (!visited[i])
            dfs(i);
    }
    while (!s.empty())
    {
       int t = s.top();
       cout<<t<<' ';
       s.pop();
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
    }
    topsort(n);
}