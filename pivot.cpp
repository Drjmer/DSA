#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int n)
{
    int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
int arr[10]={1,2,3,4,5,6,7,-44,-43,-42};
cout<<pivot(arr,10)<<endl;
}