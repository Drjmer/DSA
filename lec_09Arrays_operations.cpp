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
void intInsertion(int arr[],int size,int element,int index,int capacity){
    //code for insertion
    if(size>=capacity)
    {
        cout<<"Array is Full" ;
    }
    else{
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    size+=1;
    display(arr,size);}
}
    

int main(){
    int arr[5]={7,8,12,27,88};
    int size=5;
    int element=45;
    int index=2;
    int capacity=sizeof(arr)/sizeof(int);
    intInsertion(arr,size,element,index,capacity);
}