#include<bits/stdc++.h>
using namespace std;
//using sieve of erastonese mtd to find no. of prime upto n;
int main()
{
    int n;
    cin>>n;
    vector<int>prime(n+1,true);
    prime[0]=prime[1]=false;
    int cnt=0;
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            cout<<i<<" ";
            for(int j=2*i;j<=n;j+=i)
            {
                prime[j]=0;
            }
        }
    }
    cout<<endl;
}