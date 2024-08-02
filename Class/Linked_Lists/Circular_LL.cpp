#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *nxt;

    Node( int data)
    {
        this->data=data;
    }
};
void traverse(Node* &head)
{
    Node* tmp=head;
    while(tmp->nxt!=head)
    {
        cout<<tmp->data<<endl;
        tmp=tmp->nxt;
    }
    cout<<tmp->data<<endl;
    cout<<"--------------------------------------------------------"<<endl;

}
void insertFirst(Node* &head,int data)
{
    Node *new1=new Node(data);
    Node* tmp=head;
    while(tmp->nxt!=head)
    {
        tmp=tmp->nxt;
    }
    new1->nxt=head;
    tmp->nxt=new1;
    head=new1;
}

void insertAtLast(Node* &head,int data)
{
    Node *new1=new Node(data);
    Node* tmp=head;
    while(tmp->nxt!=head)
    {
        tmp=tmp->nxt;
    }
    new1->nxt=head;
    tmp->nxt=new1;
}
void insertAtmiddle(Node* &head,int data,int position)
{
     Node *new1=new Node(data);
    Node* tmp=head;
    for(int i=0;i<position-1;i++)
    tmp=tmp->nxt;
    new1->nxt=tmp->nxt;
    tmp->nxt=new1;
    
}
void deleteAtfirst(Node* &head)
{
    Node* tmp=head;
    Node* p=head;
    while(tmp->nxt!=head)
    {
        tmp=tmp->nxt;
    }
    tmp->nxt=p->nxt;
    head=head->nxt;
    delete (p);
}
    
void deleteAtlast(Node* &head) 
{
    Node* tmp=head->nxt;
    // Node* p=head;
    Node* sLast=head;
    while(tmp->nxt!=head)
    {
        tmp=tmp->nxt;
        sLast=sLast->nxt;
    }
   sLast->nxt=head;
   delete tmp;
}  

void deleteInMiddle(Node *&head,int position)
{
    Node *tmp=head;
    Node*p=head->nxt;
    for(int i=0;i<position-1;i++)
    {
        tmp=tmp->nxt;
        p=p->nxt;
    }
    tmp->nxt=p->nxt;
    delete p;
   

}  

//detecting loop
bool detectLoop(Node* head)
{
    Node* tmp=head;
    map<Node*,bool>visited;
    while(tmp!=NULL)
    {
        if(visited[tmp]==true)
        {
            return true;
        }
        visited[tmp]=true;
        tmp=tmp->nxt;
    }
    return false;
}

bool detect_loop_Algo(Node*head)
{
    Node* slow=head;
    Node* fast=head;
    if(head==NULL||head->nxt==NULL) return false; 
    while(fast!=NULL && fast->nxt!=NULL)
    {
        fast=fast->nxt->nxt;
        slow=slow->nxt;
        if(fast==slow) return true;
    }
    return false;
}

int main()
{
    Node* first=new Node(10);
    Node* second=new Node(-24);
    first->nxt=second;
    Node* third=new Node(90);
    second->nxt=third;
    third->nxt=first;
    Node *head=first;
    
    insertFirst(head,-55);
   
    insertAtLast(head,120);
    
    insertAtmiddle(head,0,2);
    traverse(head);
    bool ans=detect_loop_Algo(head);
    cout<<ans<<endl;
}