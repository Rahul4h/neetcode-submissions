class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(int i=0;i<strs.size();i++)
        {
           s=s+strs[i];
           s=s+".";
        }
        return s;

    }

    vector<string> decode(string s) {
       vector<string>strs;
       string a;
       for(int i=0;i<s.size();i++)
       {
        if(s[i]=='.')
        {
            strs.push_back(a);
            a.clear();
        }
        else
        {
          a=a+s[i];
        }
       }
       return strs;
    }
};
