#include<bits/stdc++.h>
using namespace std;
class queue1
{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    queue1(int size)
    {
        this->size=size;
        front=rear=0;
        arr=new int[this->size];
    }

    void push(int data)
    {
        if(rear==size) cout<<"Queue Full"<<endl;
        else 
        {
            arr[rear++]=data;
        }
    }
    int pop()
    {
        if(front==rear) return -1;
        else
        {
            int ans=arr[front];
            front++;
            if(front==rear)
            {
                front=rear=0;
            }
            return ans;
        }
    }
    bool isEmpty()
    {
        if(rear==front) return true;
        else return false;
    }

};
int main()
{
    queue1 q(5);
    q.push(3);
    cout<<q.pop()<<endl;
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.push(0);
    cout<<q.pop()<<endl;
    

}