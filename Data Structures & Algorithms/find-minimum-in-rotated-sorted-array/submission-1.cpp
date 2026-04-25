class Solution {
public:
    int findMin(vector<int> &nums) {
        int low=0,high=nums.size()-1,mid;
        while(high-low>1)
        {
            mid=(high+low)/2;
            if(nums[low]>nums[high])
            {
                low++;
            }
            else
            {
                high=mid;
            }
        }
        if(nums[low]<nums[high])
        {
            return nums[low];
        }
        else
        {
            return nums[high];
        }

    }
};
