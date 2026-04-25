class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        vector<pair<string,string>>z;
        for(int i=0;i<strs.size();i++)
        {
            string c=strs[i];
            sort(c.begin(),c.end());
            z.push_back(make_pair(c,strs[i]));

        }
        sort(z.begin(),z.end());
        vector<string>u;
        u.push_back(z[0].second);
        for(int i=1;i<strs.size();i++)
        {

            if(z[i-1].first!=z[i].first)
            {
                v.push_back(u);
                u.clear();
                u.push_back(z[i].second);
            }
            else
            {
                u.push_back(z[i].second);
            }
        }
        v.push_back(u);
        return v;
    }
};
