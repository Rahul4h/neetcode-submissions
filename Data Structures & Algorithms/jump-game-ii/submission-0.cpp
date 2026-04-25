#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
static const int N=1010;
int dp[N];
    int  fun(vector<int>& nums, int index, int limit)
    {
        if(index==limit)
        {
            return 0;
        }
        if(dp[index]!=-1)
        {
            return dp[index];
        }
        int sum=0,mn=limit;
        for(int i=1;i<=nums[index];i++)
        { 
            if(index+i<=limit)
            {
            mn=min(mn,1+fun(nums,index+i,limit));
            }
        }
        return dp[index]=mn;
    }
    int jump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int cnt=fun( nums,0,nums.size()-1);
        return cnt;
    }
};
