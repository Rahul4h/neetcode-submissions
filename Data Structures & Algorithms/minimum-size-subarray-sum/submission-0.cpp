class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,h=0,sm=0,mn=nums.size();
        bool f=false;
        while(true)
        {
            if(sm<target)
            {
                if(h==nums.size())
                {
                    break;
                }
                sm=sm+nums[h];
                h++;
                //f=true;
            }
            if(sm>=target)
            {
                    mn=min(mn,h-l);
                    f=true;
                    sm=sm-nums[l];
                    l++;
               
            }
        }
        //if(sm>=target)
        if(f) return mn;
        else return 0;
    }
};