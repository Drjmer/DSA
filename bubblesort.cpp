#include<bits/stdc++.h>
using namespace std;
//bubblesortb   
int main()
{
    
    int arr[10]={34,65,3,-34,34,6,3,45,-34,-90};
    for(int i=1;i<10;i++)
    {
        for(int j=0;j<10-i;j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<10;i++)
    cout<<arr[i]<<" ";
    return 0;
}