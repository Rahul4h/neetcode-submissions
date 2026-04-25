#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      vector<int>v;
      vector<vector<int>>u;
      set<vector<int>>st;
      long long sm=0;
      sort(nums.begin(), nums.end());
      for(int i=0;i<nums.size();i++)
      {
        sm=sm+nums[i];
        v.push_back(nums[i]);

        for(int j=i+1;j<nums.size();j++)
        {
          sm=sm+nums[j];
          v.push_back(nums[j]);
          for(int k=j+1;k<nums.size();k++)
          {
            sm=sm+nums[k];
            v.push_back(nums[k]);
            for(int l=k+1;l<nums.size();l++)
            {
              sm=sm+nums[l];
              v.push_back(nums[l]);
              if(sm==target)
              {
                //sort(v.begin(),v.end());
                st.insert(v);
              }
              v.pop_back();
              sm=sm-nums[l];

            }
            v.pop_back();
            sm=sm-nums[k];
          }
          v.pop_back();
          sm=sm-nums[j];

        }
        v.pop_back();
        sm=sm-nums[i];
      }
      for(auto it:st)
      {
        u.push_back(it);
      }
      return u;
    }
};