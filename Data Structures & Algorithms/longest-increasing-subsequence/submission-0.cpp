#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   int dp[1001];
  // int mx=0;
   int fun(vector<int>& nums, int index)
   {
     if(dp[index]!=-1)
     {
        return dp[index];
     }
    int cnt=0,mx=0;
    for(int i=index+1;i<nums.size();i++ )
    {
        if(nums[index]<nums[i])
        {
            cnt=1+fun(nums,i);
        
        }
        mx=max(cnt,mx);
    }
    return dp[index]=mx;
   }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int cnt=0,mx=0;
        for(int i=0;i<nums.size();i++)
        {
             cnt=fun(nums,i);
             mx=max(cnt+1,mx);
        }
        return mx;
    }
};
