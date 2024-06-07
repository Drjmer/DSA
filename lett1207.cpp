#include<bits/stdc++.h>
using namespace std;
bool unique(vector<int>& arr)
{
     int size=arr.size();
        vector<int> ans(size,0);
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                if(arr[i]==arr[j])
                {
                    ans[i]+=1;
                   
                    arr.erase(arr.begin()+j);
                }
            }
        cout<<ans[i]<<endl;
        }

        int ans1=0;
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<endl;
            ans1=ans1^ans[i];
        }
        if(ans1==1) return true;
        else return false;
    
}
int main(){
    vector<int> arr{1,2,2,1,1,3};
    cout<<unique(arr)<<endl;
}