#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={34,65,3,-34,34,6,3,45,-34,-90};
    for(int i=0;i<10;i++)
    {
        int minIndex=i;
        for(int j=i;j<10;j++)
        {
            if(arr[minIndex]<arr[j]) minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}