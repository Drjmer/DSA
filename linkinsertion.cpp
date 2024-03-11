#include<bits/stdc++.h>
using namespace std;
 struct Node
{
    /* data */
    int data;
     Node *next;
};
Node* inserAtFirst(Node *head,int data)
{
    Node *ptr=(Node*)malloc(sizeof(Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
Node* insertAtIndex(Node* head,int data,int index){
    Node *ptr=(Node*)malloc(sizeof(Node));
    Node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
Node* insertAtEnd(Node* head,int data)
{
    Node *ptr=(Node*)malloc(sizeof(Node));
    Node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;

}
void traverse(Node *ptr)
{while(ptr!=NULL)
   { cout<<"Element: "<<ptr->data<<endl;
    ptr=ptr->next;}
}

int main()
{
     Node *head;
     Node *second;
     Node *third;
     Node *fourth;
     Node *third_2;
    // allocated memory in heap
    head= ( Node*)malloc(sizeof( Node));
    second= ( Node*)malloc(sizeof( Node));
    third= ( Node*)malloc(sizeof( Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    third_2=( Node*)malloc(sizeof( Node));
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=13;
    third->next=fourth;
    fourth->data=34;
    fourth->next=NULL;
    cout<<"Original linkes list:"<<endl;
    traverse(head);
    cout<<endl;
    cout<<"Link list after insertfirst:"<<endl;
    head=inserAtFirst(head,545);
    traverse(head);
    cout<<endl;
cout<<"Link list after insertIndex:"<<endl;
    head=insertAtIndex(head,64,2);
    traverse(head);
    cout<<endl;
    cout<<"Link list after insertend:"<<endl;
    head=insertAtEnd(head,90);
    traverse(head);
    return 0;


}