class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>u;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
           int l=i+1,h=nums.size()-1;
           while(l<h)
           {
            if(nums[l]+nums[h]>-nums[i])
            {
                h--;
            }
            else if(nums[l]+nums[h]<-nums[i])
            {
                l++;
            }
            else
            {
                u.push_back(nums[i]);
                u.push_back(nums[l]);
                u.push_back(nums[h]);
                s.insert(u);
                u.clear();
                l++;
                h--;
                
            }
           }
           
          
           
        }
        for(auto it:s)
        {
            v.push_back(it);
        }
        return v;
    }
};
