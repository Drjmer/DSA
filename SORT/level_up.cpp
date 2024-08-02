#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;cin>>n>>q;
    vector<int>level(n);
    int carp_level=1;
    for(int i=0;i<n;i++)
    {
        cin>>level[i];
    }
    int count=0;
    while(q>0)
    {
        for(int i=0;i<n&&q>0;i++,q--){
        int index,k;
        cin>>index>>k;
        if(level[index-1]*k>=carp_level)
        {
            carp_level++;
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
        carp_level=1;
    }
}