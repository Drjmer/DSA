#include<bits/stdc++.h>
using namespace std; 
vector<int> findDuplicates(vector<int>& nums) {
       vector<int> ans;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++)
       {
       if(nums[i]==nums[i+1])
       {
        ans.push_back(nums[i]);
       }
       }
         
   return ans; 
   }
int main(){
    vector<int>arr={1,1,2,3,3};
    vector<int>ans;
    ans=findDuplicates(arr);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
}