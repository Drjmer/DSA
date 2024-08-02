#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *nxt;

    Node()
    {

    }
    Node(int data)
    {
        this->data=data;
    }
};
void traverse(Node* &p)
{
    Node* ptr=p;
    while (ptr != NULL)
    {
        // cout<<"Hi"<<endl;
        cout << "Element--->" << ptr->data << endl;
        ptr = ptr->nxt;
    }
    cout<<"--------------------------------"<<endl;

}
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
    

void insertAtTail(Node* &p,int data)
{
   
    Node *ptr=new Node();
    ptr->data=data;
    ptr->nxt=NULL;
    Node *tail=p;
    while(tail->nxt!=NULL) tail=tail->nxt;
    // cout<<tail->data<<endl;
    tail->nxt=ptr;
    
}
void insertAtMiddle(Node *&p,int data,Node*q) //since reference & is used no requiremen to return Node*
{
    Node *temp=p;
    Node* new1=new Node;
    new1->data=data;
    new1->nxt=q->nxt;
    q->nxt=new1;
    
}

void deleteNode(Node* &p,Node *q) //delete by address
{
    Node* temp=p;
    while(temp->nxt!=q) temp=temp->nxt;
    temp->nxt=q->nxt;
    delete q;
}


void deleteNode1(Node* &p,int data) //delete by value
{
    Node* temp=p;

    while(temp->nxt->data!=data) temp=temp->nxt;
    Node *q=temp->nxt;
    temp->nxt=temp->nxt->nxt;
    delete q;
}
void deleteFirstNode(Node* &p)
{
    Node *tmp=p;
    p=tmp->nxt;
    delete tmp;

}
void deleteLastNode(Node* &p)
{
    Node* tmp=p;
    while(tmp->nxt->nxt!=NULL) tmp=tmp->nxt;
    Node *q=tmp->nxt;
    tmp->nxt=NULL;
    delete q;
}
//how to copy a linked list part-1;
Node* llcopy(Node* head)

{
    if(head==NULL) return head;
    Node* tmp=head;
    Node* curr=new Node(tmp->data);
    Node* prev=curr;
    Node* ans=curr;
    tmp=tmp->nxt;
    delete curr;
    while(tmp!=NULL)
    {
        curr= new Node(tmp->data);
        prev->nxt=curr;
        prev=curr;
        tmp=tmp->nxt;

    }
    prev->nxt=NULL; //crucial
    return ans;
}

//how to copy a linked list part-2 using recursion
Node* llcopy1(Node *head)
{
    if(head==NULL) return head;
    Node *curr=head;
    curr->nxt=llcopy1(head->nxt);
    return curr;
}
void insertAtHead(Node* &p, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->nxt = p;
    p = temp;
    

}
Node* reverse(Node* head)
{
    Node* curr=head;
    Node* prev=NULL;
     while(curr!=NULL )
        {
            Node* f=curr->nxt;
            curr->nxt=prev;
            prev=curr;
            curr=f;
        }
        return prev;
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    head->data = 10; // head->data == (*head).data;
    head->nxt = second;
    second->data = 20;
    second->nxt = third;
    third->data = 30;
    third->nxt = NULL;
    insertAtHead(head, -55);
    insertAtTail(head,-550);
    insertAtMiddle(head,-55,second);
    traverse(head);
    Node* new_head=llcopy1(head);
    traverse(new_head);
    Node* newhead1=llcopy(head);
    traverse(newhead1);
}