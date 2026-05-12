class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size(),m=2*n;
        vector<int>v(m,0);
        for(int i=0;i<n;i++)
        {
            v[i]=nums[i];
            v[i+n]=nums[i];
        }
        return v;

    }
};