class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tt=0,hh=0;
        while(true)
        {
            tt=nums[tt];
            hh=nums[nums[hh]];
            if(tt==hh)
            {
                break;
            }
        }
        int t2=0;
        while(true)
        {
            t2=nums[t2];
            tt=nums[tt];
            if(t2==tt)
            {
                return tt;
            }
        }
    }
};
