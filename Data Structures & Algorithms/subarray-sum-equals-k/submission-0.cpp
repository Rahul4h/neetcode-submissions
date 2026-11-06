class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int smcnt=0;
        int cnt=0;
        for(int& num:nums)
        {
            smcnt=smcnt+num;
            int dif=smcnt-k;
            cnt=cnt+mp[dif];
            mp[smcnt]++;
        }
        return cnt;
    }
};