class Solution {
public:
    int search(vector<int>& nums, int target) {
       int l=0,h=nums.size()-1,mid;
       while(h-l>1)
       {
        mid=(h+l)/2;
        if(nums[mid]>nums[h])
        {
            if(nums[mid]>=target&&nums[l]<=target)
            {
                h=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        else
        {
            if(nums[mid]<=target&&nums[h]>=target)
            {
                l=mid;
            }
            else
            {
                h=mid-1;
            }
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
        return -1;
       }
    }
};
