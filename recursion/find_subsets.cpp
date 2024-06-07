#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> arr, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= arr.size())
    {
        ans.push_back(output);
        return;
    }

    int elt = arr[index];
    // mat karo select
    solve(arr, output, index + 1, ans);
    // karlo select
    output.push_back(elt);
    solve(arr, output, index + 1, ans);
}
vector<vector<int>> FindAllSubsets(vector<int> &arr)
{
    //  write your code here.
    vector<int> output;
    vector<vector<int>> ans1;
    solve(arr, output, 0, ans1);
    return ans1;
}
int main()
{
    vector<int> arr{1, 2, 3, 4,5,6};
    vector<vector<int>> ans1;
    ans1 = FindAllSubsets(arr);

    for (int i = 0; i < ans1.size(); i++)
    {
        cout<<"[";
        for (int j = 0; j < ans1[i].size(); j++)
        {
            cout<<ans1[i][j] << ",";
        }
        cout <<"]"<< endl;
    }
    int k=0;
    for(k=0;k<10;k++)
    {
        if(k==9) break;
    }
    cout<<k<<endl;
   
}