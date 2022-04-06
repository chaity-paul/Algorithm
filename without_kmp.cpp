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
int main()
{
fastio
    string s1, s2;
    ll s = 0;
    cin>>s1>>s2;
    ll l1 = s1.size();
    ll l2 = s2.size();

    f(i,0,l1)
    {
        s = 0;
        for(ll j = 0; j < l2 && i+j < l1; j++)
        {
            if(s1[i+j]!=s2[j])
                break;
            else
                s++;
        }
        if(s == l2)
            break;
    }
    if(s == l2)
        cout<<"got"<<endl;
    else
        cout<<"not get"<<endl;
}