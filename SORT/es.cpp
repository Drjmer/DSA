#include<bits/stdc++.h>
using namespace std;
int value(string s)
{
    int cnt=2;
    for(int i=1;i<s.length();i++)
    {
        if(s[i-1]==s[i])
        {
            cnt+=1;
        }
        else
        {
            cnt+=2;
        }
    }
        return cnt;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        /* code */
        string s;
        cin>>s;
        int val=value(s);
        string ans="";
        bool flag=1;
        for(int i=0;i<s.length()-1;i++)
        {
            ans+=s[i];
            if(s[i]==s[i+1]&&flag)
            {
                flag=0;
                if(s[i]!='a'&&s[i]!='z')
                ans+=(s[i]+1);
                else if(s[i]=='a')
                ans+=(s[i]+1);
                else if(s[i]=='z')
                ans+=(s[i]-1);
            }
            
            
        }
        ans+=s[s.length()-1];
        if(flag==1)
        {
            if(s[s.length()-1]!='a'&&s[s.length()-1]!='z')
            ans+=(s[s.length()-1])+1;
            else if(s[s.length()-1]=='a')
            ans+=(s[s.length()-1]+1);
            else if(s[s.length()-1]=='z')
            ans+=(s[s.length()-1])-1;
        }
        cout<<ans<<endl;
    }
    
}