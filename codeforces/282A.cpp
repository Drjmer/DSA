#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(s=="X++") x++;
        else if(s=="X--") x--;
        else if(s=="--X") --x;
        else ++x;

    }
    
    cout<<x<<endl;
}