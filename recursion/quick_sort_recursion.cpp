#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e)
{
    int cnt=0,pivotIndex,pivot=arr[s];
    for(int i=s;i<=e;i++)
    {
        if(arr[i]<pivot) cnt++;
    }
    pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex&&j>pivotIndex)
    {
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<pivotIndex&&j>pivotIndex) swap(arr[i++],arr[j--]);
    }
    return pivotIndex;

}
void quicksort(int arr[],int s,int e)
{
    if(s>=e) return;

    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);//left part sort kar
    quicksort(arr,p+1,e);//right part sort kar
}
int main()
{
int arr[11]={31,143,34,1,23,45,34,55,45,67,-9898};
quicksort(arr,0,11);
for(int i=0;i<11;i++) cout<<arr[i]<<" ";
cout<<endl;
 
 return 0;
}