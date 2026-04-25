class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int cnt=0,mx=0,lim=0;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==0)
            {
                mp[s[i]]=i+1;
                cnt++;
            }
            else
            {
                if(mp[s[i]]>lim)
                {
                    //cnt=(i+1-lim)+1;
                    lim=mp[s[i]];
                    mp[s[i]]=i+1;
                    cnt=(i+1-lim);
                }
                else
                {
                   cnt++;
                   mp[s[i]]=i+1;
                }
            }
            mx=max(cnt,mx);
        }
        return mx;
    }
};
