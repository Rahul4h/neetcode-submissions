class Solution {
public:
   int isok(vector<int>& nums,int mid)
   {
    int sn=0,cnt=0;
     for(int i=0;i<nums.size();i++)
     {
          if(sn+nums[i]>mid)
          {
            cnt++;
            sn=0;
          }
           sn=sn+nums[i];
     }
     if(sn>0) cnt++;
     return cnt;
   }
    int splitArray(vector<int>& nums, int k) {
        int sm=0,mx=0;
        for(int i=0;i<nums.size();i++)
        {
            sm=sm+nums[i];
            mx=max(mx,nums[i]);
        }
        int l=mx,h=sm,mid;
        while(h-l>1)
        {
            mid=(h+l)/2;
            if(isok(nums,mid)>k)
            {
                l=mid;
            }
            else
            {
                h=mid;
            }

        }
       if(isok(nums,l)==k && isok(nums,h)==k) return l;
       else if(isok(nums,h)==k) return h;
       else return l;
       

    }
};