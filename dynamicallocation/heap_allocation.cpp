#include<iostream>
using namespace std;
int main()
{
    int *ptr=new int;
    *ptr=1;
    cout<<ptr<<endl<<*ptr<<endl;
    int n;cin>>n;
    int *arr1=new int[n];
    for (int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<n;i++) cout<<arr1[i]<<" ";
}