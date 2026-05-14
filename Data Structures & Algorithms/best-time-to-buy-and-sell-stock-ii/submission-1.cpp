class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0],sm=0;
        //bool f=false;
        for(int i=1;i<prices.size();i++)
        {
            
            if(prices[i]>=mn)
            {
                sm=sm+prices[i]-mn;
                //f=true;
                mn=prices[i];
            }
            
            else
            {
               mn=prices[i];
            }
        }
        return sm;
    }
};