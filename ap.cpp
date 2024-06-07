#include<bits/stdc++.h>
using namespace std;
int nth(int n)
{
    return 3*n+7;
}
int setbits(int a){
    int count=0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a=a>>1;
    }
    return count;
}
int fibo(int n){
    int a=0,b=1;
    int nth;
    for(int i=1;i<n;i++){
        nth=a+b;
        a=b;
        b=nth;
    }
    return a;
}
int main(){
    int n;cin>>n;
    int ans=nth(n);
    cout<<ans<<endl;
    int a,b;
    cin>>a>>b;
    int ans1=setbits(a)+setbits(b);
    cout<<ans1<<endl;
    int c;
    cin>>c;
    cout<<fibo(c)<<endl;
}