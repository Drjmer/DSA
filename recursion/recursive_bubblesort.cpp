#include<bits/stdc++.h>
using namespace std;
void sortArray(int *arr,int size)
{   //base case
    if(size==0||size==1)
    return;
    
    for(int i=0;i<size-1;i++)
    {if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);}

    sortArray(arr,size-1);
}
int main()
{

int arr[10]={31,143,34,1,23,45,34,55,45,67};
sortArray(arr,10);
for(int i=0;i<10;i++) cout<<arr[i]<<" ";
cout<<endl;

 return 0;
}