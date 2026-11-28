#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   int dp[210][1010];
    //int cnt=0;
    int fun(vector<int>& nums, int target,int index)
    {
        if(target==0)
        {
            
            return 1;
        }
        if(dp[index][target]!=-1) return dp[index][target];
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(target-nums[i]>=0)
            {
               ans=ans+ fun(nums,target-nums[i],i);
            }
        }
        return dp[index][target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        return fun(nums,target,0);
        }
};