#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        for(int i=0;i<n;i++)
        {
            char ch;cin>>ch;
            s+=ch;
        }
        s[0]='(';
        for(int i=2;i<n;i+=2)
        {
            if(s[i-1]=='(') s[i]=')';
            else s[i]='('; 
        }
        vector<int>first(n/2);
    vector<int>second(n/2);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(') first.push_back(i+1);
        else second.push_back(i+1);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(abs(first[i]-second[i]));
    }
    cout<<ans<<endl;
    }
    
}