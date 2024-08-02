#include<bits/stdc++.h>
using namespace std;

int Sum1(int *arr,int n,int k)
{
    deque<int>maxi;
    deque<int>mini;
    for(int i=0;i<k;i++)
    {
        while(!maxi.empty()&&arr[maxi.front()]<=arr[i])
        maxi.pop_back();
        while(!mini.empty()&&arr[mini.front()]>=arr[i])
        mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }
    int ans=0;
    for(int i=k;i<n;i++)
    {
        ans+=arr[mini.front()]+arr[maxi.front()];
        if(!maxi.empty()&&i-maxi.front()>=k)
        maxi.pop_front();
        if(!mini.empty()&&i-mini.front()>=k)
        mini.pop_front();

        while(!maxi.empty()&&arr[maxi.front()]<=arr[i])
        maxi.pop_back();
        while(!mini.empty()&&arr[mini.front()]>=arr[i])
        mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }
    ans+=arr[mini.front()]+arr[maxi.front()];
    return ans;
}


int main()
{
    int arr[7]={2, 5, -1, 7, -3, -1, -2};
    cout<<Sum1(arr,7,4)<<endl;
}