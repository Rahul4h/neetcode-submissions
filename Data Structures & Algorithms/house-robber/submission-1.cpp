#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
static const int N=200;
int dp[N];
int fun(vector<int>& nums,int n)
{
    if(n<=0)
    {
        return 0;
    }
    if(n<=1)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int mx=0;
    for(int i=n-2;i>=0;i--)
    {
       mx=max(mx,nums[i]+fun(nums,i));
    }
    return dp[n]=mx;
}
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int h=nums.size();
        return max(nums[h-1]+fun(nums,h-1),nums[h-2]+fun(nums,h-2));
    }
};
