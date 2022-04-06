#include<bits/stdc++.h>
using namespace std;
#define mx 1000
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
    tree[node] = tree[left] + tree[right];
}
void update(int node, int b, int e, int i, int n){
    if(b > i || e < i)
        return;
    if(i <= b && i >= e){
        tree[node] = n;
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(left, b, mid, i, n);
    update(right, mid + 1, e, i, n);
    tree[node] = tree[left] + tree[right];
}
int main(){
    int n;
    cin>> n;
    for(int i = 1; i <= n; i++)
        cin>>arr[i];

    segtree(1, 1, n);
    for(int i = 1; i < 2*n; i++)
        cout<<tree[i]<<' ';
        cout<<endl;
    update(1, 1, n, 2, 3);
    for(int i = 1; i < 2*n; i++)
        cout<<tree[i]<<' ';
        cout<<endl;
    }