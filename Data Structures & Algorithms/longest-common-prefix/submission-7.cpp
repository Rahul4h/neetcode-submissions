class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     //map<char,int>m;
     string s;
     vector<int>v(strs[0].size(),1);
     
     //int l=0,h=s.size()-1;
     if(strs[0].size()==0)
     {
        return "";
     }
     else
     {
     
     for(int i=1;i<strs.size();i++) 
     {
        int l=0,h=min(strs[0].size()-1,strs[i].size()-1);
        if(strs[i].size()==0)
        {
            return "";
        }
        else
        {
        for(int j=strs[i].size()-1;j>=0;j--)
        {
           if(j==h)
           {
            if(strs[0][j]==strs[i][j])
            {
               v[j]++;
            }
            h--;
           }
        }
        }
     }
     //string s;
     for(int i=0;i<v.size();i++)
     {
        if(v[i]<strs.size())
        {
            break;
        }
        s.push_back(strs[0][i]);
     }
     return s;
    }
    }
};