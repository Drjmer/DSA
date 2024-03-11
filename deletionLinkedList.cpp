#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

};
Node* deletefirst(Node* head)
{   Node* ptr=head;
head=head->next;
free(ptr);
return head;
}
Node* deleteAtindex(Node *head,int index)
{   Node*p =head;
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
Node* deleteLastnode(Node* head){
    Node* p=head;
    Node* q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
Node* deleteValue(Node* head,int value){
    Node* p=head;
    Node* q=head->next;
    while(q->data!=value&&q->next!=NULL){
        p=p->next;
        q=q->next;

    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    return head;

}
void traverse(Node* p)
{
    while(p!=NULL){
        cout<<"Element: "<<p->data<<endl;
        p=p->next;
    }
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
    head=deleteValue(head,11);
    traverse(head);

}