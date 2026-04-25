#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<vector<int>>v;
  vector<int>u;
  void fun(vector<int>& nums,int index)
  {
   
   v.push_back(u);
    for(int i=index;i<nums.size();i++)
    {
       
       u.push_back(nums[index]);
       fun(nums,i+1);
       u.pop_back();
    }
  }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
        fun(nums,i);
        }
        for(int i=0;i<v.size();i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        set<vector<int>>st;
        for(int i=0;i<v.size();i++)
        {
            st.insert(v[i]);
        }
        vector<vector<int>>z;
       for(auto it:st)
       {
        z.push_back(it);

       }
       return z;
    }
};
