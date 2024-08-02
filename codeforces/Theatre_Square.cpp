#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int a1=n/a+(n%a!=0);
    long long int b1=m/a+(m%a!=0);
    long long int ans=a1*b1;
    cout<<ans<<endl;
}