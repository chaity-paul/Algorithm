#include<bits/stdc++.h>
using namespace std;
void selection(int arr[], int n)
{
    int m, in;
    for(int i = 0; i < n; i++)
    {
        m = arr[i];
        in = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < m)
            {
                m = arr[j];
                in = j;
            }
        }
        swap(arr[i], arr[in]);
    }
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    selection(arr, n);
}