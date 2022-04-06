 #include<bits/stdc++.h>
 using namespace std;
 void insertion(int arr[], int n)
 {
     for(int i = 1; i < n; i++)
     {
         int j = i - 1, t = arr[i];
         while(t < arr[j] && j >= 0)
         {
            arr[j + 1] = arr[j];
            j--;  
         }
         arr[j + 1] = t;
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

        insertion(arr, n);

 }
