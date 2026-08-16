class Solution {
public:
   vector<vector<string>>res;
   bool ispali(int j,int i,string& s)
   {
      //bool f=true;
      while(j<i)
      {
        if(s[j]==s[i])
        {
          i--;
          j++;
        }
        else
        {
          return false;
        }
      }
      return true;
   }
    void fun(int j,int i, string& s, vector<string>& part)
    {
      if(i>=s.size())
      {
        if(i==j)
        {
          res.push_back(part);
        }
        return;
      }
      if(ispali(j,i,s))
      {
         part.push_back(s.substr(j,i-j+1));
         fun(i+1,i+1,s,part);
         part.pop_back();
      }
      fun(j,i+1,s,part);
    }
    vector<vector<string>> partition(string s) {
       // string x;
       vector<string>part;
        fun(0,0,s,part);
        return res;
    }
};
