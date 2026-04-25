class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=0,mx=-10000;
      for(int i=0;i<nums.size();i++)
      {
           res=res+nums[i];
            mx=max(res,mx);
           if(res<0)
           {
            res=0;
           }
           //mx=max(res,mx);

      }
      return mx;
    }
};
