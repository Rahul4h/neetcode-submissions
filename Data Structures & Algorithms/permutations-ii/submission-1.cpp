class Solution {
public:
    set<vector<int>>v;
    vector<int>u;
    void fun(vector<int>& nums,int index, vector<bool> vis)
    {
        u.push_back(nums[index]);
        vis[index]=true;
        if(u.size()==nums.size())
        {
            v.insert(u);
            u.pop_back();
            return;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(!vis[i])
            {
                fun(nums,i,vis);
                
            }
        }
        u.pop_back();
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int N=10;
        vector<bool> vis(10,false);
        //memset(vis, false, sizeof(vis));
       for(int i=0;i<nums.size();i++)
       {
            fun(nums,i,vis);
       }
        
        vector<vector<int>>vv;
        for(auto it:v)
        {
            vv.push_back(it);
        }
        return vv;
    }
};