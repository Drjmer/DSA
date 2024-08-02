#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n)
    {
        for(int i=0;i<3&&n!=0;i++)
        {
            int space=i;
            while(space--)
            {
                cout<<" ";
                
            }
            cout<<"*"<<endl;
            n--;
        }
        for(int i=1;i>=0&&n!=0;i--)
        {
            int space=i;
            while(space--)
            {
                cout<<" ";
            }
            cout<<"*"<<endl;
            n--;
        }
    }
}