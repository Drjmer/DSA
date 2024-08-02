#include<bits/stdc++.h>
using namespace std;
//HAPPY CODING
int main()
{
    vector<int>ans(101,1); //1-->ON
    ans[0]=0;
    for(int i=2;i<=100;i++)
    {//odd vala on kar raha hai aur even vala off
        
       for(int j=1;j<=100;j++)
       {
         if(j%i==0)
         {
            if(ans[j]==0) ans[j]=1;
            else ans[j]=0;
         }
       }
        
        
    }
    int cnt=0;
    for(int i=1;i<=100;i++) if(ans[i]==1) cnt++;
    cout<<cnt<<endl;
}