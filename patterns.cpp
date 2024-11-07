#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int i=n;
    int count=0;
    while(i>=1)
    {  
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        int star=1;
        while(star<=n-i)
        {
            cout<<"*";
            star++;
        }
        int star1=1;
        while(star1<=n-i)
        {
            cout<<"*";
            star1++;
        }
        
        int k=n-count;
        for(int m=0;m<i;m++)
        {   

            cout<<k;
            k--;
        }
        cout<<endl;
        i--;
        count++;

    }

    cout<<"---------------------------------------"<<endl;

    
}