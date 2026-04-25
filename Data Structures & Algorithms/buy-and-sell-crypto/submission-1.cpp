class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //vector<int>v;
        int mn=prices[0],mx=0,cnt=0;
        for(int i=0;i<prices.size();i++)
        {
           if(prices[i]<mn)
           {
            mn=prices[i];
            mx=prices[i];
           }
           else
           {
            mx=max(mx,prices[i]);
           }
           cnt=max(cnt,mx-mn);
        }
       
        return cnt;
    }
};
