#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
static const int N=110;
int dp[N];
int fun2(vector<int>& nums,int index)
{
    if(dp[index]!=-1)
    {
        return dp[index];
    }
    int mx=0;
   for(int i=index+2;i<nums.size();i++)
   {
    mx=max(fun2(nums,i)+nums[i], mx);
   }
   return dp[index]=mx;
}
int fun1(vector<int>& nums,int index)
{
    if(dp[index]!=-1)
    {
        return dp[index];
    }
    int mx=0;
   for(int i=index+2;i<nums.size()-1;i++)
   {
    mx=max(fun1(nums,i)+nums[i], mx);
   }
   return dp[index]=mx;
}

 int rob(vector<int>& nums) {
    memset(dp,-1,sizeof(dp));
    int h=nums.size();
        
        
        int mx =fun1(nums,0)+nums[0],mx2=0;
        for(int i=1;i<nums.size();i++)
        {
            memset(dp,-1,sizeof(dp));
           mx2=max(mx2, fun2(nums, i)+nums[i]);
        }
        return max(mx,mx2);
        
    }
};
