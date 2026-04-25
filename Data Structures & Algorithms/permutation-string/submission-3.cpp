class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        {
            return false;
        }
        else
        {
            int k=s1.size();
            map<int,int>mn,mx;
            for(int i=0;i<s1.size();i++)
            {
                mx[s1[i]]++;
            }
            bool b=true;
            for(int i=0;i<s2.size();i++)
            {
                
                mn[s2[i]]++;
                if(i>=k)
                {
                mn[s2[i-k]]--;
                }
                    
                
                 b=true;
                    for(char ch='a';ch<='z';ch++)
                    {
                        if(mx[ch]!=mn[ch])
                        {
                            b=false;
                            break;
                        }

                    }
                    if(b)
                    {
                        break;
                    }
                
                
                

            }
            return b;
        }
    }
};
