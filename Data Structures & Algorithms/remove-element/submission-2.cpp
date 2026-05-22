class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=-1,cnt=0;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==val)
        {
            l=i;
            cnt++;
            break;
        }
       }
       if(l==-1)
       {
        return nums.size();
       }
       int h=l+1;
       while(h<nums.size())
       {
         if(nums[h]!=val)
         {
            nums[l]=nums[h];
            nums[h]=val;
            l++;
            h++;
         }
         else
         {
            cnt++;
            h++;
         }
       }
       return nums.size()-cnt;
    }
};