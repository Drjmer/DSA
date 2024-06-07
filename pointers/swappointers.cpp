#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int **temp=&a;
    a=b;
    b=*temp;

}

int main()
{
    int a=5,b=6;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    int arr[10]={1,2,3,4,4,5,6,6,6,6};
    char s[4]={'h','e','l'};
    cout<<s<<endl;
    int *p=arr;
    for(int i=0;i<10;i++)
    cout<<*(p++)<<" ";
    
}