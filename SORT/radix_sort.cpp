#include<bits/stdc++.h>
using namespace std;
void countsort(int arr[],int exp,int n){
    int cnt[10]={0};
    int output[n];
    for(int i=0;i<n;i++){
        cnt[(arr[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++) cnt[i]+=cnt[i-1];
    for(int i=n-1;i>=0;i--){
        output[cnt[(arr[i]/exp)%10]-1]=arr[i];
        cnt[(arr[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++) arr[i]=output[i];
}
int main(){
    int arr[10]={90,-3,9,98,34,45,76,3,56,23433};
    int maxi=arr[0];
    for(int i=1;i<10;i++){
        if(arr[i]>maxi) maxi=arr[i];
    }
    for(int exp=1;maxi/exp>0;exp*=10){
        countsort(arr,exp,10);
    }
    for(int i=0;i<10;i++) cout<<arr[i]<<" ";
    cout<<endl;
}