#include<bits/stdc++.h>
using namespace std;
bool bSearch(int arr[],int s,int e,int key)
{
    if(s>e) return false;//base case
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    return true;
    else if(arr[mid]>key) return bSearch(arr,s,mid-1,key);
    else if(arr[mid]<key) return bSearch(arr,mid+1,e,key);
}
int main()
{
    int arr[10]={-45,1,2,3,4,5,6,7,8,9};
    cout<<bSearch(arr,0,9,-5)<<endl;
}