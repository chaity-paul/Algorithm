#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool com(ll a,ll b)
{
return a<b;
}
#define f(i,a,n) for(ll i=a;i<n;i++)
#define rf(i,n,a) for(ll i=n;i>=a;i--)
#define fe(x,a) for(auto x: a)
#define test ll T;cin>>T;while(T--)
#define ok cout<<endl
#define vl vector<ll>
#define vf vector<float>
#define vc vector<char>
#define vs vector<string>
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sl set<ll>
#define pll pair<ll,ll>
#define psl pair<string,ll>
#define msl map<string,ll>
#define mll map<ll,ll>
#define fastio {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define ft first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define ninf -1e8
#define inf 1e8

vector<pair<int, int>> graph[10001];
int dist[10001];
bool visited[10001];

#define INF 5000000;
int no_of_nodes, no_of_edges;

void Dijkstra(int src)
{
    for (int i = 0; i < 10001; i++)
        dist[i] = INF;

    dist[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

    Q.push({0, src});

    while (!Q.empty())
    {
        int cur_node = Q.top().second;
        Q.pop();

        if (visited[cur_node])
            continue;
        visited[cur_node] = true;

        for (auto x : graph[cur_node])
        {
            int u = x.first;  
            int w = x.second; 

            if (dist[u] > dist[cur_node] + w)
            {
                dist[u] = dist[cur_node] + w;
                Q.push({dist[u], u});
            }
        }
    }
}

int main()
{
    fastio
    test
    {
        ll n, p, c, m;
        string s, s1, s2;
        cin>>n;
        while(n--)
        { 
            cin>>s>>p;
            for(ll i = 0; i < p; i++)
            {
            ll l, r;
            cin>>l>>c;
            }
        }
        cin>>m;
        while(m--)
        {
            cin>>s1>>s2;
        }
    }


    