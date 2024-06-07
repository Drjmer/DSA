#include<bits/stdc++.h>
using namespace std;

//iterative way;
int gcd(int a,int b)
{
    int m=max(a,b);
    int n=min(a,b);
    while(n!=0)
    {
        int rem=m%n;
        m=n;
        n=rem;
    }
    return m;
}
//recursive way;
int rGcd(int a,int b)
{
    if(b==0) return a;
    else return rGcd(b,a%b);
}
int main()
{
    cout<<rGcd(5,4)<<endl;
}