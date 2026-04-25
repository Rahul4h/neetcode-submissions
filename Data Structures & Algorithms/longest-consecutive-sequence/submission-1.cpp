class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        else
        {
        set<int>st;
        int cn=1,mx=0;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        vector<int>v;
        for(auto it:st)
        {
            v.push_back(it);
        }
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i+1]-v[i]==1)
            {
                cn++;
            }
            else
            {
                mx=max(mx,cn);
                cn=1;
            }
        }
        mx=max(cn,mx);
        return mx;
        }
    }
};
