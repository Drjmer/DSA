#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        pair<int,int>ans1;
        cin>>ans1.first>>ans1.second;
        pair<int,int>ans2;
        cin>>ans2.first>>ans2.second;

        if(ans1.first>ans1.second&&ans2.first>ans2.second) cout<<"Yes"<<endl;
        else if(ans1.first<ans1.second&&ans2.first<ans2.second) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


    }
}