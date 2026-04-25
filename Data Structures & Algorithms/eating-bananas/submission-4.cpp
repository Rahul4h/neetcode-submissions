class Solution {
public:
int fun(int x,vector<int>& piles)
{
    int sm=0;
    for(int i=0;i<piles.size();i++)
    {
        sm=sm+(piles[i]/x);
        if(piles[i]%x!=0)
        {
            sm++;
        }
    }
    return sm;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int r=piles[piles.size()-1],l=1;
        while(r-l>1)
        {
            int mid=(r+l)/2;
            if(fun(mid,piles)<=h)
            {
                r=mid;
            }
            else
            {

                l=mid;
                //break;
            }
        }
        if(fun(l,piles)<=h)
        {
           return l;
        }
        else
        {
            return r;
        }
    }
};
