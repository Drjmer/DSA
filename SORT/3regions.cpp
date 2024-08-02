#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<vector<char>>grid(2,vector<char>(n));
        for(int i=0;i<2;i++)

        {
            for(int j=0;j<n;j++)
            {
                char ch;cin>>ch;
                grid[i][j]=ch;
            }
        }
        int connected=1;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='.')
                {
                    if(i==0&&j<n&&grid[i+1][j]=='x'&&grid[i][j+1]=='x')
                    {
                        connected+=1;
                    }
                    else if(i==1&&j<n&&grid[i-1][j]=='x'&&grid[i][j+1]=='x')
                    {
                        connected+=1;
                    }
                    else if(j>=1&&j<n&&i==0&&grid[i][j-1]=='x'&&grid[i][j+1]=='x'&&grid[i+1][j]=='x')
                    connected+=1;
                    else if(j>=1&&j<n&&i==0&&grid[i][j-1]=='x'&&grid[i][j+1]=='x'&&grid[i-1][j]=='x')
                    connected+=1;
                }
            }
        }
        cout<<connected<<endl;
    }
}