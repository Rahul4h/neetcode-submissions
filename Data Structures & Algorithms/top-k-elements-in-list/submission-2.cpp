class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>mp;
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            v.push_back(make_pair(it.second, it.first));
        }
        sort(v.begin(),v.end());
        vector<int>u;
        for(int i=v.size()-1;i>=0;i--)
        {
            u.push_back(v[i].second);
            k--;
            if(k==0)
            {
                break;
            }
        }
        return u;
    }
};
