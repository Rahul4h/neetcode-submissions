class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int l=0;
        while(l<max(word1.size(), word2.size()))
        {
            if(l<word1.size())
            {
                s.push_back(word1[l]);
            }
            if(l<word2.size())
            {
                s.push_back(word2[l]);
            }
            l++;
        }
        return s;
    }
};