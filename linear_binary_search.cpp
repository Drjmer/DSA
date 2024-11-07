#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[],int element,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element){
            return i;
            break;
        }
    }
}
int BinarySearch(int arr[],int element,int size)
{
    int low=0,high=size;
    if(arr[low]==element){
        return low;
    }
    else if(arr[high]==element)
    {
        return high;
    }
    else{
        while(arr[low]!=element){
        int mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]>element)
        {
            high=mid;
        }
        else{
            low=mid;
        }
        return -1;}

    }
//what the fuck is this vs code I hate
}
int main()
{
    int arr[10]={1,3,4,3,5,65,34,6,34,6};
    int arr1[5]={1,2,3,4,5};
    int p=LinearSearch(arr,3,10);
    int q=BinarySearch(arr1,10,5);
    cout<<p<<endl;
    cout<<q<<endl;
}