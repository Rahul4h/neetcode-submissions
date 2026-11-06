class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int n = nums.size();
       int i=0;

       while(i<n)
       {
        if(nums[i]<=0 || nums[i]> n)
        {
            i++;
            continue;
        }
        int index=nums[i]-1;
        if(nums[i]!=nums[index])
        {
            swap(nums[i],nums[index]);
        }
        else {
            i++;
        }
       }
       for(int i=0;i<n;i++)
       {
        if(i+1!=nums[i]) return i+1;
       }
       return n+1;
    }
};