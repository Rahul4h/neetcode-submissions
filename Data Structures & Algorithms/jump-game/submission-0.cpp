#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

static const int N=1010;
 int dp[N];
   int fun(vector<int>& nums, int index)
   {
    
    if(index>=nums.size()-1)
    {
        return 1;
    }
    if(dp[index]!=-1)
    {
        return dp[index];
    }
    int e=0;
    for(int i=index+1;i<=index+nums[index];i++)
    {
        if(fun(nums,i)==1)
        {
            return dp[index]=1;
        }
    }
    return dp[index]=0;
   }
    bool canJump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int f=fun(nums,0);
        if(f==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
