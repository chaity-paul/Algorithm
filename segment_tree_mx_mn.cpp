#include<bits/stdc++.h>
using namespace std;
#define mx 1000
#define ninf -1e8
int arr[mx];
int tree[4*mx];
void segtree(int node, int b, int e){
    if(b == e){
        tree[node] = arr[b];
        return;
    }
    int left = 2 * node;
    int right = 2 * node + 1;
    int mid = (b + e) / 2;
    segtree(left, b, mid);
    segtree(right, mid + 1, e);
    tree[node] = max(tree[left], tree[right]);
}
int query(int node, int b, int e, int l, int r){
    if(b > r || e < l)
        return ninf;
    if(l <= b && r >= e)
        return tree[node];
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    int q1 = query(left, b, mid, l, r);
    int q2 = query(right, mid + 1, e, l, r);
    return max(q1, q2);
}
int main(){
    int n, l, r;
    cin>>n>>l>>r;
    for(int i = 1; i <= n; i++){
        cin>>arr[i];
    }
    segtree(1, 1, n);
    cout<<query(1, 1, n, l, r)<<endl;
}