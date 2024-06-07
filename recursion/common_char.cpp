#include <bits/stdc++.h>
using namespace std;
void findChar(int arr[26],string words)
{
    for(char ch:words)
    {
        arr[ch-'a']++;
    }
}
int main()
{
    vector<string> words = {"bella", "label", "roller"};
    vector<string> ans1;
    int count[26]={0};
    findChar(count,words[0]);
    for(int i=1;i<words.size();i++)
    {
        int temp[26]={0};
        findChar(temp,words[i]);
        for(int i=0;i<26;i++)
        {
            count[i]=min(count[i],temp[i]);
        }
    }
    for(int i=0;i<26;i++)
    {
        while(count[i]--)
        {
            ans1.push_back(string(1,i+'a'));
        }
    }
    for(int i=0;i<ans1.size();i++) cout<<ans1[i]<<" ";
    cout<<endl;
}
