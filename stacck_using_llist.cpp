#include<bits/stdc++.h>
using namespace std;
//push pop pee isEmpty isFull
struct Node
{
    /* data */
    int data;
    Node* next;
};

bool  isEmpty(Node* ptr){
    if(ptr==NULL){return true;}
}
bool isFull(Node *ptr){
    Node* n=(Node*)malloc(sizeof(Node));//no new memory can be allocated
    if(n==NULL){return true;}
}
Node* push(Node* top,int data)
{if(!isFull(top)){
    Node *n=(Node*)malloc(sizeof(Node));
    n->data=data;
    n->next=top;
    top=n;
    return top;
}

else{
    cout<<"List is full"<<endl;}
}
int pop(Node* *top){ //we want changes to the top  in main fxn also
    if(!isEmpty(*top)){
    Node* q=*top;
    *top=(*top)->next;
    int x=q->data;
    free(q);
    return x;}
    else{cout<<"List Empty";}
}
void traverse(Node*top){
    Node*p=top;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;}
}
int main()
{
    Node* top=NULL;
    top=push(top,21);
    top=push(top,54);
    top=push(top,34);
    top=push(top,523);
    traverse(top);
    int a=pop(&top); 
    cout<<endl<<a<<endl;
    cout<<endl;
    traverse(top);
    return 0;
}