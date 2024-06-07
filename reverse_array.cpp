#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int size)
{
    for(int i=0;i<size/2;i++){
        int temp=arr[size-i-1];
        arr[size-i-1]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
 }
}
void altswap(int arr[],int size){
    for(int i=0;i<size;i+=2)
    {
        int temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
 int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
 reverse(arr,15);cout<<endl;

 int arr1[6]={1,234,45,34,5,54};
 altswap(arr1,6);
 return 0;
 
}