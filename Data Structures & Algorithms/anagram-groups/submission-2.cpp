#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string& a:strs)
        {
            vector<int>count(26,0);
            for(char c:a)
            {
               count[c-'a']++;
            }
            string key(26,0);
            for(int i=0;i<26;i++)
            {
                key[i]=(char)count[i];
            }
            mp[key].push_back(a);
        }
        vector<vector<string>>v;
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        return v;
    }
};
