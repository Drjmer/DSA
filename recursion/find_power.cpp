#include<bits/stdc++.h>
using namespace std;
//using recursion
int power(int a,int b)
{   //base case
    if(b==0) return 1;
    
    //process
    
    if(b&1) return a*power(a*a,b>>1);//if b is odd
    else return power(a*a,b>>1);
}
int main()
{



    int a,b;
    cin>>a>>b;
//Normal method

    // int ans=1;
    // while(b!=0)
    // {
    //     if(b&1)
    //     {
    //         ans=ans*a;
    //     }
    //     a=a*a;
    //     b=b>>1;
    // }
    // cout<<ans<<endl;
    int ans=power(a,b);
    cout<<ans<<endl;


}