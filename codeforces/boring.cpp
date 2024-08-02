#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;cin>>t;
    while(t--)
    {
        long long int n,l,r;
        cin>>n>>l>>r;
        long long int *arr=new long long int[n];
        for(long long int i=0;i<n;i++) cin>>arr[i];
        long long int ans=0;
        long long int i=0;
        while(i<n)
        {
            long long int sum=arr[i];
            while(sum<l)
            {   
                i++;
                if(i>=n) break;
                sum+=arr[i];
                if(sum>r)
                {
                    sum-=arr[i];
                    break;
                    
                }
            }
            if(sum>=l&&sum<=r)
            {
                ans++;i++;
            }
            if(sum>r) i++;
        }
        cout<<ans<<endl;
    }
}