#include<bits/stdc++.h>
using namespace std;
class heap{

int arr[100];
int size;
int index;
    public:

    //constructor
    heap()
    {
        size=0;
        
    }

    void insert(int d)
    {
        size=size+1;
        arr[size]=d;
        index=size;
        while(index>1)
        {
            int pIndex=index/2;
            if(arr[index]>arr[pIndex])
            swap(arr[index],arr[pIndex]);
            else
            return;

            index=pIndex;

        }
    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deleteNode()
    {
        swap(arr[1],arr[size]); //exchange elements

        size--; //delete the last elmt

        int i=1;
        while(i<size)
        {
            int leftChild=2*i;
            int rightChild=2*i+1;
            if(leftChild<=size&&arr[i]<arr[leftChild])
           { swap(arr[i],arr[leftChild]);i=leftChild;}
            else if(rightChild<=size&&arr[rightChild]>arr[i])
           { swap(arr[i],arr[rightChild]); i=rightChild;}
            else
            return ;
        }

    }

   
};
 void heapify(int arr[],int size,int index)
    {
        int largest=index;
        int right=2*index+1;
        int left=2*index;

    
            if(right<=size&&arr[right]>arr[largest]) largest=right;
            if(left<=size&&arr[left]>arr[largest]) largest=left;
        
        if(largest!=index)
        {
            swap(arr[largest],arr[index]);
            // check for others;

            heapify(arr,size,largest);
        }
    }
void heapSort(int arr[],int size)
{
    while(size>1)
    {
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,size,1);
    }
}
int main()
{
    heap h1;
    h1.insert(50);
    h1.insert(45);
    h1.insert(44);
    h1.insert(55);
    h1.insert(52);  
    h1.print();
    h1.deleteNode();
    h1.print();
    int arr[6]={-1,50,45,44,55,52};
    int n=5;
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    heapSort(arr,5);
    cout<<"---------------------------------"<<endl;
for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
}