class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,mid;
        while(h-l>1)
        {
            mid=(h+l)/2;
            if(nums[mid]>=target)
            {
                h=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        if(nums[h]==target)
        {
            return h;
        }
        else if(nums[l]==target)
        {
            return l;
        }
        else
        {
            if(target>nums[h])
            {
                return h+1;
            }
            else if(target<nums[l])
            {
                return l;
            }
            else
            {
            return h;
            }
        }
    }
};