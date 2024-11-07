#include<bits/stdc++.h>
using namespace std;
//bubblesort
int main()
{
    
    int arr[8]={1, 5, 6, 0, -10, 9, 8 ,0};
    int n=8;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}