#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        int rem;
        
            if (n>=100)
           { rem=n/100;
            n=n-rem*100;
            cout<<"100 rupees note required is "<<rem<<endl;}
           
            else if(n>=50)
            {rem=n/50;
            n=n-rem*50;
            cout<<"50 rupees note required is "<<rem<<endl;}
            
            else if(n>=20)
            {rem=n/20;
            n=n-rem*20;
             cout<<"20 rupees note required is "<<rem<<endl;}
             
           else if(n>=1)
            {rem=n/1;
            n=n-rem;
            cout<<"1 rupees note required is "<<rem<<endl;}
            
        
    }
}