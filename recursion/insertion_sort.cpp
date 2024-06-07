#include<bits/stdc++.h>
using namespace std;

//recursive way for insertion Sort...
void iSort(int arr[],int size,int i)
{
    //base case
    if(i==size) return;
    int temp=arr[i];
    int j;
    for(j=i-1;j>=0;j--)
    {
        if(arr[j]>temp) arr[j+1]=arr[j];
        else break;
    }
    arr[j+1]=temp;
    iSort(arr,size,i+1);
}
int main()
{
 int arr[10]={34,65,3,-34,34,6,3,45,-34,-90};
    iSort(arr,10,0);
    for(int i=0;i<10;i++) cout<<arr[i]<<" ";
    cout<<endl;   
 
 return 0;
}