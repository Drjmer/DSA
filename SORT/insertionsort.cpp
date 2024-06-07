#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n)
{
    //n-->size of array
    int i=1;
    while(i<n)
    {
        int j=i-1;
        int temp=arr[i];
        while(j>=0)
        {   
            if(arr[j]>temp) 
            {arr[j+1]=arr[j];}
            else{break;}
            j--;
           
        }
         arr[j+1]=temp;
        i++;
    }
}
void isort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>=i+1;j--)
        {
            if(arr[j-1]>arr[j])
            swap(arr[j-1],arr[j]);
            
        }

    }
}
int main()
{
    int arr[10]={34,65,3,-34,34,6,3,45,-34,-90};
    isort(arr,10);
    for(int i=0;i<10;i++) cout<<arr[i]<<" ";
    cout<<endl;
}