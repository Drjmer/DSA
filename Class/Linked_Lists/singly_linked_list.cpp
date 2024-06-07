#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *nxt;
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

void insertAtHead(Node* &p, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->nxt = p;
    p = temp;
    

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
    traverse(head);
    insertAtHead(head, -55);
    // cout << endl;
    traverse(head);

    insertAtTail(head,-55);
    // cout << endl;
    traverse(head);
    insertAtMiddle(head,-55,second);
    // cout<<"------------------------"<<endl;
    traverse(head);
    deleteNode(head,second);
    traverse(head);
    deleteNode1(head,30);
    traverse(head);
    deleteFirstNode(head);
    traverse(head);
    deleteLastNode(head);
    traverse(head);
}