#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<long long int> &arr,long long int mid,long long int m,long long int n)
{
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        if(arr[i]>mid)
        {
            sum=sum+arr[i]-mid;
        }
    }
    
    if(sum>=m) return true;
    else return false;
}
int Height(vector<long long int> &arr,long long int n,long long int m)
{
    long long int s=0,sum=0;
    for(long long int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    long long int e=sum;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e)
    {
        if(isPossible(arr,mid,m,n))
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main()
{
    long long int n,m;
    cin>>n>>m;
    vector<long long int>arr(n);
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    long long int ans=Height(arr,n,m);
    cout<<ans<<endl;

}