#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int product=1;
        while(n!=0)
        {   
            int digit=n%10;
            cout<<digit;
            sum+=digit;
            product*=digit;
            n=n/10;
        }
        int ans=product-sum;
        cout<<endl;
        cout<<ans;
    
}