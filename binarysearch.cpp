#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) end=mid-1;
        else start=mid+1;
        mid=(start+mid)/2;
    }
    return -1;
}
int main()
{
    
    int arr[]={};
    int key;cin>>key;
    int ans=binarySearch(arr,1,key);
    cout<<ans<<endl;
}