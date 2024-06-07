#include<bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
    long long int s=0,e=x,mid=s+(e-s)/2,ans=-1;
    while(s<=e)
    {
        long long square=mid*mid;
        if(square==x) return mid;
        if (square< x) {
          ans = mid;
          s = mid + 1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans ;
    }
double morePrecision(int ans,int precision,int n)
{double factor=1;
double ans1=ans;
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        for(double j=ans1;j*j<n;j+=factor)
        {
            ans1=j;
        }
    }
    return ans1;
}
int main()
{
    int n;cin>>n;
    int ans=mySqrt(n);
    double final_ans=morePrecision(ans,10,n);
    cout<<final_ans<<endl;
}