class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        map<int,int>mp;
         for(int i=0;i<nums.size();i++)
         {
            mp[nums[i]]++;
         }
         vector<int>v;
         if(mp[0]>1)
         {
            for(int i=0;i<nums.size();i++)
            {
              v.push_back(0);
            }
         }
         else if(mp[0]==1)
         {
            long long p=1;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)
                {
               p=p*nums[i];
                }
            }
        for(int i=0;i<nums.size();i++)
        {
          if(nums[i]==0)
          {
            v.push_back(p);
          }
          else
          {
            v.push_back(0);
          }
        }
         }
         else
         {
            long long p=1;
            for(int i=0;i<nums.size();i++)
            {
                 p=p*nums[i];

            }
            for(int i=0;i<nums.size();i++)
            {
                v.push_back(p/nums[i]);
            }
         }
        return v;
    }
};
