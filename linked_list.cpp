#include<bits/stdc++.h>
using namespace std;
 struct Node
{
    /* data */
    int data;
     Node *next;
};
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
    // allocated memory in heap
    head= ( Node*)malloc(sizeof( Node));
    second= ( Node*)malloc(sizeof( Node));
    third= ( Node*)malloc(sizeof( Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=13;
    third->next=fourth;
    fourth->data=34;
    fourth->next=NULL;
    traverse(head);
    return 0;


}