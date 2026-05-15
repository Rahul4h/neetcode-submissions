class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //map<int,int>mp;
        //bool f=false;
        if(k==0)
        {
            return false;
        }
        else
        {
        int l=0,h=1;
        bool f=true;
         while(h<nums.size()) 
         {
            
           
            if(h-l<=k)
            {
               
                if(nums[h]==nums[l])
                {
                    return true;
                }
               if(h-l==1)
               {
                f=true;
               }
               if(h-l==k)
               {
                f=false;
               }
               
                //return true;
            }
            if(k==1)
            {
                l++;
                h++;
            }
            else if(f)
            {
                h++;
            }
            else 
            {
                l++;
            }
           
           
            
         }
        return false;
        }
    }
};