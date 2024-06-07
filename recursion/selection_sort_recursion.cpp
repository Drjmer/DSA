//selection-sort-->pick min and replace it with first
#include<bits/stdc++.h>
using namespace std;
//approch 1
void selsortr(int *arr,int j,int size)
{
    if(j==size) return ;
    int minIndex=j;
    for(int i=j;i<size-j;i++)
    {
        if(arr[minIndex]>arr[i]) minIndex=i;
    }
    swap(arr[minIndex],arr[j]);
    selsortr(arr,j+1,size);
}
int main()
{
int arr[10]={31,143,34,1,23,45,34,55,45,67};
selsortr(arr,0,10);
for(int i=0;i<10;i++) cout<<arr[i]<<" ";
cout<<endl;

 return 0;
}