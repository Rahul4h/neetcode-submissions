class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        {
            return false;
        }
        else
        {
            bool f=false;
            for(int i=0;i<=s2.size()-s1.size();i++)
            {
                string a=s2.substr(i,s1.size());
                sort(a.begin(),a.end());
                sort(s1.begin(),s1.end());
                if(s1==a)
                {
                    f=true;
                    break;
                }
            }
            return f;
        }
    }
};
