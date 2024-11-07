#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size;
    int mid=(start+end)/2;
    while(start<end)
    {
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) end=mid-1;
        else start=mid+1;
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    
    int arr[]={1,2,3,4,5,6};
    int key;cin>>key;
    int ans=binarySearch(arr,6,key);
    cout<<ans<<endl;
}