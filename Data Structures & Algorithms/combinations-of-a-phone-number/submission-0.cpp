class Solution {
public:
    vector<string>result;
    void fun(unordered_map<char,string>& mp,string digits, int index,string res)
    {
        if(index==digits.size()) return ;
        if(digits[index]=='1') fun(mp,digits,index+1,res);
        string x=mp[digits[index]];
        for(int i=0;i<x.size();i++)
        {
            res.push_back(x[i]);
            fun(mp,digits,index+1,res);
            if(res.size()==digits.size())
            {
            result.push_back(res);
            }
            res.pop_back();
        }

        
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
       // vector<string>result;
       string res="";
        fun(mp,digits,0,res);
        return result;
        
    }
};
