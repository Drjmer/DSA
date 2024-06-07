#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   int a=1;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=0;
            break;
        }
    }
    if(a==1&&n>2){
        cout<<"Prime";
    }
    else if(n<2){
        cout<<"Not a Prime";
    }
    else if(n==2){
        cout<<"Prime";
    }
    else{
        cout<<"Not a Prime";
    }
}
