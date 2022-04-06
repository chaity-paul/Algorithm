#include<bits/stdc++.h>
using namespace std;
#define mx 200001
int visited[mx];
vector<int> edge[mx];
stack<int> s;
void dfs(int x)
{
    if(visited[x])
        return;
    visited[x] = 1;
    for(auto i: edge[x])
    {
        if(!visited[i])
            dfs(i);
    }
    s.push(x);
}
int v1[mx];
bool cycle(int s){
    v1[s]=1;
    for (auto i: edge[s]){
        if (!v1[i])
        {
            if (cycle(i))
                 return 1;
        }
        else if (v1[i]==1)
             return 1;
    }
    v1[s] = 2;
    return 0;
}
void topsort(int n)
{
    for (int i = 1; i <= n; i++) 
    {
        if (!v1[i] && cycle(i)) 
        {
            cout<<"IMPOSSIBLE"<<endl;
            exit(0);
        }
        else if (!visited[i])
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