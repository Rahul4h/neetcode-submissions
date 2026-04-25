#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
static const int N=50;
int dp[N];
int fun(int n)
{
    if(n<=1)
    {
        return 1;
    }
    if(n<=0)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n]=fun(n-1)+fun(n-2);
    
}
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        return fun(n);
    }
};
