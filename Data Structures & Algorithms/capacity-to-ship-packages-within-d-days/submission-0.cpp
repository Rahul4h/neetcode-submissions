class Solution {
public:
   bool fun(vector<int>& weights,int sum,int days)
   {
     int cnt=0,mx=0;
     bool f=true;
     for(int i=0;i<weights.size();i++)
     {
        if(mx+weights[i]<=sum)
        {
            mx=mx+weights[i];

        }
        else
        {
            cnt++;
            mx=weights[i];
            if(mx>sum)
            {
                break;
            }
        }
     }
     if(mx>sum)
     {
        return false;
     }
     else if(cnt+1>days)
     {
        return false;
     }
     else
     {
        return true;
     }

   }
    int shipWithinDays(vector<int>& weights, int days) {
        int sm=0;
        for(int i=0;i<weights.size();i++)
        {
            sm=sm+weights[i];
        }
        int h=sm,l=0,mid;
        while(h-l>1)
        {
            mid=(h+l)/2;
            if(fun(weights,mid,days))
            {
                h=mid;
            }
            else
            {
                l=mid;
            }
        }
        if(fun(weights,l,days))
        {
            return l;
        }
        else
        {
            return h;
        }
    }
};