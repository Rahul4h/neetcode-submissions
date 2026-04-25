#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
static const int N=10000+1;
int dp[N];
int fun(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int mx=N;
    for(int i=1;i*i<=n;i++)
    {
        if((n-(i*i))>=0)
        {
          mx=min(mx,1+fun(n-(i*i)));
        }
    }
    return dp[n]=mx;
}
    int numSquares(int n) {
        memset(dp,-1,sizeof(dp));
        return fun(n);
    }
};