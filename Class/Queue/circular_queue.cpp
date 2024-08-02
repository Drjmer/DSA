#include<bits/stdc++.h>
using namespace std;
class queue1
{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    queue1(int size)
    {
        this->size=size;
        front=rear=-1;
        arr=new int[this->size];
    }
    void push(int data)
    {
        if(front==0 && rear==size-1 && (front!=-1&&rear==front-1)) //queue full 
        { cout<<"Queue Full"<<endl;}
        else if(front==-1) //first elmt to push
        {
            front=rear=0;
        }
        else if(rear==size-1&&front!=0) //rear circular continue me aage elmts dalo
        {
            rear=0;
        }
        else //normal case
        {
            rear++;
        }
        arr[rear]=data;
    }
    int pop()
    {
        if(front==-1) return -1;
        int ans=arr[front];
        if(front==rear) //single element
        {
            front=rear=-1;
        }
        else if(front==size-1)
        {
            front=0;
        }
        else //normal case
        {
            front++;
        }
        return ans;
    }

    bool isFull()
    {
        if((front==0&&rear==size-1)||(rear==front-1))
        cout<<"IS full"<<endl;
    }

};
int main()
{
    queue1 q(5);
    q.push(6);
    q.push(6);
    q.isFull();
    q.push(6);
    q.push(6);
    q.push(6);
    q.isFull();
}