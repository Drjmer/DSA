#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m; //n-->rows m-->cols
    int **arr=new int*[n];//creating array of pointers
    for(int i=0;i<n;i++)
    {
        *(arr+i)=new int[m]; // *(arr+i) or arr[i] or i[arr];
            }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //release memory
for(int i=0;i<n;i++)
{
    delete [] arr[i];
}
delete[] arr; //deleting arrays of pointers
return 0;
}