#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        return mid+1;
        else if(arr[mid]>key)
        end=mid-1;
        else
        start=mid+1;
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    
    int arr[7]={1,23,24,45,455,565};
    int key;cin>>key;
    int ans=binarySearch(arr,7,key);
    cout<<ans<<endl;
}