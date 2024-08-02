#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* prev;
    Node* nxt;

    //constructor
    Node(int data)
    {
        this->data=data;
    }
};
void traverse(Node* &head)

{   cout<<"normal"<<endl;
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<endl;
        tmp=tmp->nxt;
    }
    cout<<"---------------------------------"<<endl;
}

void insertAtHead(int data,Node* &head)
{
    Node* tmp=head;
    Node *new1=new Node(data);
    new1->nxt=tmp;
    tmp->prev=new1;
    new1->prev=NULL;
    head=new1;
}
void insertAttail(int data,Node* &head)
{
    Node* tmp=head;
    while(tmp->nxt!=NULL)
    tmp=tmp->nxt;
    Node* new1=new Node(data);
    tmp->nxt=new1;
    new1->nxt=NULL;
    new1->prev=tmp;

}
void insertAtMiddle(int data,Node* head,int position)
{
    Node* tmp=head;
    for(int i=0;i<position-1;i++) tmp=tmp->nxt;
    Node* new1=new Node(data);
    new1->nxt=tmp->nxt;
    new1->prev=tmp;
    tmp->nxt->prev=new1;
    tmp->nxt=new1;
}
void deleteFirst(Node* &head)
{
    Node* tmp=head;
    head=tmp->nxt;
    head->prev=NULL;
    delete tmp;

}
void deleteAtLast(Node *&head)
{
    Node *tmp=head;
    while(tmp->nxt!=NULL) tmp=tmp->nxt;
    Node* p=tmp->prev;
    p->nxt=NULL;
    delete tmp;

}
void deletemiddle(Node *&head,int position)
{   
    Node* tmp=head;
    for(int i=0;i<position;i++) tmp=tmp->nxt;
    Node *p=tmp->prev;
    Node *n=tmp->nxt;
    n->prev=p;
    p->nxt=n;
    // cout<<tmp->data<<"hi"<<endl;
    delete tmp;
    
}
void traverse_reverse(Node* &head)
{
    cout<<"reverse"<<endl;
    Node* tmp=head;
    while(tmp->nxt!=NULL)
    {
        tmp=tmp->nxt;
    }
    while(tmp!=NULL)
    {
        cout<<tmp->data<<endl;
        tmp=tmp->prev;
    }
    cout<<"------------------------------------------"<<endl;
}
int main()
{
    Node* first=new Node(10);
    Node* second=new Node(20);
    first->prev=NULL;
    second->nxt=NULL;
    second->prev=first;
    first->nxt=second;
    Node* head=first;
   
    insertAtHead(30,head);
    insertAttail(-55,head);
    insertAtMiddle(88,head,2);
    traverse(head);
    deletemiddle(head,2);
    traverse(head);
    // traverse_reverse(head);
    // traverse_reverse(head);

}