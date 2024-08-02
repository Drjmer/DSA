#include<bits/stdc++.h>
using namespace std;
#define pi 3.14
#define area(r) (pi*r*r)
int main()
{
    //jagged array--> 2D array having different length of cols for each row;
    int m;cin>>m; // no of rows;
    int **arr=new int*[m];//pointer to array of pointers
    int *col=new int[m];
    for(int i=0;i<m;i++)
    {  // cout<<"hi"<<endl;
        cin>>col[i];
        arr[i]=new int[col[i]];
    }
    for(int i=0;i<m;i++)
    {int n=col[i];
        for(int j=0;j<n;j++)
        {  // cout<<"hi1"<<endl;
            cin>>arr[i][j];
        }
   // cout<<"hi2"<<endl;
    }
    cout<<"--------------Output--------------"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<col[i];j++)
        {
            cout<<arr[i][j]<<" " ;
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
    delete [] col;
    cout<<pi<<endl;
    cout<<area(2)<<endl;
    return 0;
}