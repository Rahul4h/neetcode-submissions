class Solution {
public:
    int search(vector<int>& nums, int target) {
      int l=0,h=nums.size()-1,mid;
      while(h-l>1)
      {
        mid=(l+h)/2;
        if(nums[mid]>target)
        {
            h=mid-1;
        }
        else
        {
            l=mid;
        }
      }
      if(nums[l]==target)
      {
        return l;
      }
      else if(nums[h]==target)
      {
        return h;
      }
      else
      {
        return -1;
      }

    }
};
