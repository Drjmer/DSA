#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    
    unsigned int m=n;
    cout<<n<<endl<<m<<endl;


    int i=0;
    float ans=0;
    while(m!=0){

    int bit= !(m&1);
    
    ans=(bit*pow(10,i))+ans;
    m=m>>1;
    i++;
    }
    cout<<ans<<endl;


    
}