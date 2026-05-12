class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     //map<char,int>m;
     string s;
     int mn=200,mx=200;
     bool f=true;
     for(int i=0;i<strs.size();i++) 
     {
        int x=strs[i].size();
        mx=min(mx,x);
        for( int j=0;j<strs[i].size();j++)
        {
            
            if(j+1>s.size())
            {
                s.push_back(strs[i][j]);
            }
            else 
            {
                if(s[j]!=strs[i][j])
                {
                    mn=min(mn,j);
                    f=false;
                   // break;
                }
            }
        }
       
     }
     if(!f)
     {
        while(s.size()>mn)
        {
            s.pop_back();
        }
     }
     if(s.size()>mx)
     {
        while(s.size()>mx)
        {
            s.pop_back();
        }
     }
     return s;  
    }
};