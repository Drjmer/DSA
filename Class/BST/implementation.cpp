#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
    Node* left;
    Node* right;
    int data;

    Node(int data)
    {
        this->data=data;
        this->left =NULL;
        this->right=NULL;
    }

};

Node* insert(Node* root,int data)
{
    if(root==NULL) 
    {
        root=new Node(data);
        return root;
    }

    if(root->data>data)
    {
        root->left=insert(root->left,data);
    }
    else
    {
        root->right=insert(root->right,data);
    }
    return root;
}
void takeInput(Node* &root)
{
    int data;cin>>data;
    while(data!=-1)
    {
       root= insert(root,data);
       cin>>data;
    }
}

void traverse(Node* root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* front=q.front();q.pop();

        if(front==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<front->data<<" ";
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
    }
}
void inorder(Node *root)
{
    if(root==NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//searching in BST
bool searchInBST(Node *root, int x) {
    // Write your code here.
    if(root==NULL) return false;
    if(root->data==x) return true;
    bool ans=false;
    if(root->data>x) 
    {
        ans=searchInBST(root->left,x);
    }
    else
    {
        ans=searchInBST(root->right,x);
    }
    return ans;
}
pair<Node*,Node*>minmax(Node* root)
{
    pair<Node*,Node*>ans;
    Node* tmp=root;
    Node* tmp1=root;
    while(tmp->left!=NULL) tmp=tmp->left;
    while(tmp1->right!=NULL) tmp1=tmp1->right;
    ans=make_pair(tmp,tmp1);
    return ans;
}
Node* minVal(Node* root)
{
    Node* tmp=root;
    while(tmp->left!=NULL)
    {
        tmp=tmp->left;
    }
    return tmp;
}
Node* deleteNode(Node* root,int target)
{
    if(root==NULL) return NULL;

    if(root->data==target)
    {
        //0 child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }

        //1 child

        //left child
        if(root->left!=NULL && root->right==NULL)
        {
            Node *tmp=root->left;
            delete root;
            return tmp;
        }
        if(root->left==NULL&&root->right!=NULL)
        {
            Node* tmp=root->right;
            delete root;
            return tmp;
        }

        //2 child
        if(root->right!=NULL && root->left!=NULL)
        {
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteNode(root->right,mini);
            return root;
        }

    }

    else if(root->data>target)
    {
       root->left= deleteNode(root->left,target);
    }
    else{
       root->right= deleteNode(root->right,target);
    }

}

int main()
{
    cout<<"Enter data for BST: "<<endl;
    Node* root=NULL;
    takeInput(root);
    traverse(root);
    Node* root1=deleteNode(root,5);
    cout<<endl;
    traverse(root1);
    //inorder without recursion
    // inorder(root);cout<<endl;
    // stack<Node*>s;
    // Node* tmp=root;
    // while(true)
    // {   
    //     if(tmp!=NULL)
    //     {
    //         s.push(tmp);
    //         tmp=tmp->left;
    //     }
    //     else
    //     {
    //         if(s.empty()) break;
    //         Node* front=s.top();
    //         s.pop();
    //         cout<<front->data<<" ";
    //         tmp=front->right;
    //     }

    // }
    // cout<<"min"<<minmax(root).first->data<<" "<<"max"<<minmax(root).second->data<<" ";
}