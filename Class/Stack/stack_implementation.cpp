#include<bits/stdc++.h>
using namespace std;

//using array;
class Stack{
    public:
    int *arr;
    int size;
    int top=-1;
    //contructor
    Stack(int size)
    {
        this->size=size;
        arr=new int[this->size];
    }

    void push(int data)
    {
        if(top!=size) 
        {arr[++top]=data;}
        else cout<<"Stack Overflow"<<endl;
    }
    void pop()
    {
        if(top==-1) cout<<"Stack Underflow"<<endl;
        else 
        {
            top--;
        }
    }
    void peek()
    {
        cout<<arr[top]<<endl;
    }
};


//using linked list
class Node
{   public:
    Node *nxt;
    int data;
    Node(int data)
    {
        this->data=data;
    }
};
class Stack1{
    public:
    Node* top=new Node(-1);
    // top->nxt=NULL;
    
    Node* head=top;
    int size;
    int cnt=0;

    Stack1(int size)
    {
        this->size=size;
        this->top->nxt=NULL;
    }

    void push(int data)
    {
        if(cnt==size) cout<<"Stack Overflow"<<endl;
        else 
        {
            Node* tmp=new Node(data);
            this->top->nxt=tmp;
            tmp->nxt=NULL;
            
            this->top=tmp;
            cnt++;
        }
    }
    void pop()
    {
        if(cnt==0) cout<<"Stack Underflow"<<endl;
        else 
        {
            Node *tmp=head;
            while(tmp->nxt->nxt!=NULL)
            {
                tmp=tmp->nxt;
            }
            Node* q=tmp->nxt;
            tmp->nxt=NULL;
            this->top=tmp;
            delete q;

        }
    }
    void peek()
    {
        if(cnt==0) cout<<"Empty"<<endl;
        else cout<<this->top->data<<endl;
    }
        

};
int main()
{
    Stack st(5);
    st.push(22);
    st.push(23);
    st.peek();

    cout<<"element popped"<<endl;
    st.pop();
    st.peek();
cout<<"-------------------------------------"<<endl;
    Stack1 st1(5);
    st1.push(1);
    st1.push(2);
    st1.peek();
    st1.pop();
    cout<<"Element popped"<<endl;
    st1.peek();
}