#include<bits/stdc++.h>
using namespace std;
void merge(int *arr, int b, int mid, int e){
    int brr[1000];
    int i = b;
    int j = mid + 1;
    int k = b;
    while(i <= mid && j <= e){
        if(arr[i] < arr[j])
            brr[k++] = arr[i++];
        else
            brr[k++] = arr[j++];
    }
    while(j <= e)
        brr[k++] = arr[j++];

    while(i <= mid)
        brr[k++] = arr[i++];

    for(int i = 0; i <= e; i++)
        arr[i] = brr[i];
}

void sorting(int *arr, int b, int e){
    if(b == e)
        return;
    int mid = (b + e) / 2;
    sorting(arr, b, mid);
    sorting(arr, mid + 1, e);
    merge(arr, b, mid, e);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    sorting(a, 0, n-1);
    for(int i = 0; i < n; i++)
        cout<<a[i]<<' ';
    cout<<endl;
}