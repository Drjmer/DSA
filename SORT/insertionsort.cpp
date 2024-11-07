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
void isort(int arr[],int n){
    for(int i=1;i<n;i++) //assuming 1 element is sorted
    {
        int tmp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(tmp<arr[j]){
                arr[j+1]=arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1]=tmp;
    }
}
//bubble sort hai ye
// void isort(int arr[],int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=n-1;j>=i+1;j--)
//         {
//             if(arr[j-1]>arr[j])
//             swap(arr[j-1],arr[j]);
            
//         }

//     }
// }
int main()
{
    int arr[5]={1, -2, 5, 9, 10};
    isort(arr,5);
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
    cout<<endl;
}