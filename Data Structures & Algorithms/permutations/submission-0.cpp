#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   vector<vector<int>>v;
   vector<int>u;
   vector<bool>vis;
   void dfs(vector<int>& nums,int index)
   {

      if(u.size()==nums.size())
      {
         v.push_back(u);
        return;
      }
      
    for(int i=0;i<nums.size();i++)
    {
       if(vis[i])
       {
        continue;
       }
       u.push_back(nums[i]);
       vis[i]=true;
       dfs(nums, i);
       u.pop_back();
       vis[i]=false;
        

    }
   }
    vector<vector<int>> permute(vector<int>& nums) {
        //vector<int>u;
       // memset(vis,false,sizeof(vis))
       v.clear();
        u.clear();
        vis.assign(nums.size(), false); // Vector-er size fix kora
        dfs(nums,0);
        
        return v;
    }
};
