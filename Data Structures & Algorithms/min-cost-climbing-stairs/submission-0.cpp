#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   static const int N=200;
   int dp[N];
   int fun(vector<int>& cost, int h)
   {
      if(h==1)
      {
        return 0;
      }
      if(h==0)
      {
        return 0;
      }
      if(dp[h]!=-1)
      {
        return dp[h];
      }
      return dp[h]= min(cost[h-1]+fun(cost,h-1),cost[h-2]+fun(cost,h-2));
   }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        int h=cost.size()-1;
        return fun(cost,h+1);
    }
};
