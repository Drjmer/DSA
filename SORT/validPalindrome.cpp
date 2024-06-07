#include <bits/stdc++.h> 
#include<string>
using namespace std;
char tolower(char n)
{
    if(n>='a'&&n<='z') return n;
    else if(n>='A' && n<='Z') return n-'A'+'a';
   
}
int binary(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{  
   
    string s1;
    getline(cin,s1);
    int i;
    for(i=0;i<10;++i)
    cout<<i<<" ";
    cout<<i<<endl;
    cout<<s1;
    int arr[5]={-1,4,6,78,90};
    int ans=binary(arr,5,-1);
    cout<<endl<<ans<<endl;
}