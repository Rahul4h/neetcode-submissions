class Solution {
public:
    bool isPalindrome(string s) {
        string c;
        bool f=true;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                c.push_back(s[i]+32);
            }
            else if(s[i]>='a'&&s[i]<='z')
            {
                c.push_back(s[i]);
            }
            else if(s[i]>='0'&&s[i]<='9')
            {
                c.push_back(s[i]);
            }
        }
        for(int i=0;i<((c.size())/2)+(c.size())%2;i++)
        {
            if(c[i]!=c[c.size()-1-i])
            {
                f=false;
                break;
            }
        }
        return f;
        
    }
};
