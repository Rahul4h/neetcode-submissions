#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   vector<int>u;
   vector<vector<int>>v;
   void dfs(vector<int>& nums, int i)
   {
      if(i==nums.size())
      {
        v.push_back(u);
       // u.clear();
        return;
      }
       
       
       dfs(nums, i+1);
       //u.clear();
       u.push_back(nums[i]);
       dfs(nums, i+1);
       
       u.pop_back();
       
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(nums, 0);
        return v;
    }
};
