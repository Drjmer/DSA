#include<bits/stdc++.h>
using namespace std;
void reverse(char arr[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        swap(arr[s++],arr[e--]);
    }
}
int main()
{
    char name[20];
    cin>>name;int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    reverse(name,count);
    for(int i=0;i<count;i++)
    {
        cout<<name[i];
    }
    return 0;
}