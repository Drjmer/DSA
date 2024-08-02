#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;cin>>t;
        string a,b="Timur";
        cin>>a;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}