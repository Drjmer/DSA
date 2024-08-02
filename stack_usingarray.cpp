#include<bits/stdc++.h>
using namespace std;
struct stack1
{
    /* data */
    int size;
    int *arr;
    int top; // no element is present in the stack
};
bool isEmpty(stack1 *ptr){
    if(ptr->top==-1){
        return true;
    }
    else{
        return false;
    }
}
bool isFull(stack1 *ptr){
    if(ptr->top==ptr->size-1){
        return true;
    }
    else{
        return false;
    }
}
void push(stack1*s,int value) //push elements inside the stack
{
    if(isFull(s)){cout<<"full"<<endl;}
    else{
        s->top++;
        s->arr[s->top]=value;
    }
}
int pop(stack1 *s){ //removes element from top of the stack follows LIFO operation
    int val;
    if(isEmpty(s)){cout<<"Empty";
    return -1;}
    else{
        val=s->arr[s->top];
        s->top=s->top-1;
    }
    return val;

}
int peek(stack1 *s,int index){//returns value at index i;
    if(s->top-index+1<0){cout<<"Position invalid";return  -1;}
    else{
        return s->arr[s->top-index+1];
    }
}
//stackBottom->returns last element of stack, stackTop->returns top element of stack

int stackBottom(stack1 *p){

    return p->arr[0];
}
int stackTop(stack1* p){
    return p->arr[p->top];
}

int main(){
    stack1* s=(stack1*)malloc(sizeof(stack1));
    s->size=80;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));//initialize data in heap

    push(s,23);
    push(s,45);
    push(s,89);
    push(s,78);
    for(int i=0;i<=s->top;i++){
        cout<<s->arr[i]<<" ";
    }
    cout<<endl;
    //cout<<pop(s)<<endl;
    //cout<<endl;
    //cout<<peek(s,2)<<endl;
    cout<<stackBottom(s)<<endl;
    cout<<stackTop(s)<<endl;
    delete[]s->arr;
    delete s;

    return 0;
    
}