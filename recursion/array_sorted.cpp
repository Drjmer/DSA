#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int size)
{   bool ans;
    if(size==0||size==1)
    return true;
    if(arr[0]>arr[1])
    return false;
    else{
     ans=isSorted(arr+1,size-1);
    }
return ans;
}
int Sum1(int arr[],int size)
{   
    if(size==0) return 0;
    if(size==1) return arr[0];
    else return arr[0]+Sum1(arr+1,size-1);
}
bool LinearSearch(int arr[],int size,int key)
{
    if(size==0) return false;
    if(arr[0]==key) return true;
    else return LinearSearch(arr+1,size-1,key);
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,-45};
    cout<<isSorted(arr,10)<<endl;
    cout<<Sum1(arr,10)<<endl;
    cout<<LinearSearch(arr,10,9)<<endl;
}