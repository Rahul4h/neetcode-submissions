class Solution {
public:
  int cnt=0;
   void fun(vector<int>& nums,int sum,  int index)
   {
     //cnt=cnt+sum;
     sum=sum^nums[index];
     cnt=cnt+sum;
    for(int i=index+1;i<nums.size();i++)
    {
        fun(nums,sum,i);
    }
     return ;
   }
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
          fun(nums,sum,i);
        }

        return cnt;
    }
};