class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>mp;
        bool f=false;
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]==0)
            {
                mp[nums[i]]=i+1;
            }
            else
            {
                if(i+1-mp[nums[i]]<=k)
                {
                    f=true;
                    break;
                }
                mp[nums[i]]=i+1;
            }
        }
        return f;
    }
};