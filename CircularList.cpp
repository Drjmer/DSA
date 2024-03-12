#include<bits/stdc++.h>
using namespace std;
struct Node
{
    /* data */
    int data;
    Node* next;
};
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
    traversal(head);
}
