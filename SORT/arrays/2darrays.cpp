#include<bits/stdc++.h>
using namespace std;
bool lsearch(int arr[][4],int n,int m,int key)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==key)
            return true;
        }
    }
    return false;
}
int rowWiseSum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
       
            sum+=arr[i];
        
    }
    return sum;
}
int main()
{
    int arr[3][4]={1,2,3,4,5,344,3,4,5,34,54,65};
    int key;cin>>key;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    if(lsearch(arr,3,4,key)) cout<<"Found";
    else cout<<"Not Found";
    cout<<endl;
    int maxi=-1;
    int ans;
    for(int i=0;i<3;i++)
    {
        if(rowWiseSum(arr[i],4)>maxi) {maxi=rowWiseSum(arr[i],4); ans=i;}
    }
    cout<<ans<<endl;
    
    return 0;
}