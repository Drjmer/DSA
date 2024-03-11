#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size){
    //code for traversal
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void delInsertion(int a[],int size,int index){
    //code for deletion
    for(int i=index;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    size-=1;
    display(a,size);
}
    

int main(){
    int arr[100]={7,8,12,27,88};
    int size=5;
    int element=45;
    int index=0;
    int capacity=sizeof(arr)/sizeof(int);
    delInsertion(arr,size,index);
}