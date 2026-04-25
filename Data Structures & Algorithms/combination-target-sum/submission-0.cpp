#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>v;
    vector<int>u;
    void fun(vector<int>& nums, int target, int index)
    {
        if(target==0)
        {
            v.push_back(u);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            if(target-nums[i]>=0)
            {
                u.push_back(nums[i]);
                fun(nums, target-nums[i], i);
                 u.pop_back();
            }
        }
       
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
       // vector<int>u;
        fun(nums,target,0);
        return v;

    }
};
