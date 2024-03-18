#include<bits/stdc++.h>
using namespace std;
struct Node
{
    /* data */
    int data;
    Node* next;
};
// Insertion Code
Node * insertAtFirst(Node* head,int data)
{
    Node* p=(Node*)malloc(sizeof(Node));
    Node* q=head;
    while(q->next!=head){
        q=q->next;
    }
    p->data=data;
    p->next=head;
    q->next=p;

    return p;
}
Node * insertAtIndex(Node *head,int data,int index)
{
    Node* p=head;
    Node *q=(Node*)malloc(sizeof(Node));
    q->data=data;
    int i=0;
    while(i!=index-1){
        p=p->next;
    }
    q->next=p->next;
    p->next=q;
    return head;

}
Node* insertAtEnd(Node* head,int data){
    Node* p=(Node*)malloc(sizeof(Node));
    p->data=data;
    Node* q=head;
    while(q->next!=head){
        q=q->next;
        }
    q->next=p;
    p->next=head;
    return head;
}
// Deletion code
Node* deleteFirst(Node* head){
    Node* p=head;
    Node* q=head->next;
    while(q->next!=head){
        q=q->next;
    }
    head=head->next;
    q->next=p->next;
    free(p);
    return head;
}
Node* deleteAtindex(Node* head,int index){
    Node* p=head;
    Node* q=head->next;
    int i=0;
    while(i!=index-1){
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
    return head;
}
Node* deleteLastNode(Node* head)
{
    Node *p=head;
    Node *q=head->next;
    while(q->next!=head){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
Node* deleteAtValue(Node* head,int value)
{
    Node* p=head;
    Node* q=head->next;
    while(q->data!=value){
        p=p->next;
        q=q->next;

    }
    p->next=q->next;
    free(q);
    return head;
}
void traversal(Node *head)
{
    Node* p=head;
    while(p->next!=head)
    {
        cout<<p->data<<endl;
        p=p->next;

    }
    cout<<p->data<<endl;
}
int main()
{
    Node *head=(Node*)malloc(sizeof(Node));
    Node *second=(Node*)malloc(sizeof(Node));
    Node *third=(Node*)malloc(sizeof(Node));
    head->data=1;
    second->data=2;
    third->data=3;
    head->next=second;
    second->next=third;
    third->next=head;
    head=deleteAtValue(head,2);
    traversal(head);
}
