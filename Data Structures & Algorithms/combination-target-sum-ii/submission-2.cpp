#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>v;
    vector<int>u;
    void fun(vector<int>& candidates, int target, int index)
    {
        if(target==0)
        {
            sort(u.begin(), u.end());
            v.push_back(u);
            return;
        }
        if(index==candidates.size())
        {
            return;
        }
        for(int i=index;i<candidates.size();i++)
        {
            if(i>index&&candidates[i]==candidates[i-1])
            {
                continue;
            }
            if(target-candidates[i]>=0)
            {
                u.push_back(candidates[i]);
                fun(candidates, target-candidates[i], i+1);
                 u.pop_back();
            }
        }
       
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       // vector<int>u;
       sort(candidates.begin(),candidates.end());
        fun(candidates,target,0);
       // set<vector<int>>s;
       // vector<vector<int>>r;
        
        return v;

    }
};

