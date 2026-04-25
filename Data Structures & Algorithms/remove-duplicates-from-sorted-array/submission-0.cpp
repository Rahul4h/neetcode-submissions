class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cn=nums.size();
        int l=0, h=cn-1;
        while(h>l)
        {
           if(nums[l]==nums[h])
           {
            for(int j=h;j<cn-1;j++)
            {
                nums[j]=nums[j+1];
            }
            cn--;
           }
          
          h--;
          if(h==l)
          {
            h=cn-1;
            l++;
          }
        }
        return cn;
        
    }
};