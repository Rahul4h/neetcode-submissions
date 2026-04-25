#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
static const int N=10010;
int a;
int dp[N];
int fun(vector<int>& coins, int a)
{
    if(a==0)
    {
        return 0;
    }
    if(dp[a]!=-1)
    {
        return dp[a];
    }
    int mn=N;
    for(int i=0;i<coins.size();i++)
    {
        if(a-coins[i]>=0)
        {
            
         mn=min(mn, 1+fun(coins, a-coins[i]));
        }
    }
    return dp[a]=mn;
}
int coinChange(vector<int>& coins, int amount)
{
    memset(dp, -1, sizeof(dp));
    a=amount;
   int cnt =-1;
   cnt=fun(coins,a);
   if(cnt==N)
   {
    return -1;
   }
   else
   {
   return cnt;
   }
   
}
};
