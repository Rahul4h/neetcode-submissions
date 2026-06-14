#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool f[1010];
    int ff[1010];

    int findJudge(int n, vector<vector<int>>& trust) {
        memset(f, false, sizeof(f));
        memset(ff,0,sizeof(ff));
        for(int i=0;i<trust.size();i++)
        {
            int x=trust[i][0];
            f[x]=true;
            int y=trust[i][1];
            ff[y]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(!f[i]&&ff[i]==n-1)
            {
                return i;
            }
        }
        return -1;
    }
};