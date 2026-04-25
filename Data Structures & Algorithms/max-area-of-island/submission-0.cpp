#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
static const int N=60;
bool vis[N][N];
int cnt=0,mx=0;
    void dfs(vector<vector<int>>& grid,int i,int j)
    {
        if((i<0 || i>=grid.size())||(j<0||j>=grid[0].size()))
        {
            return;
        }
        if(grid[i][j]==0)
        {
            return;
        }
        if(vis[i][j])
        {
            return ;
        }
        cnt++;
        vis[i][j]=true;
        int cnt=0;
        dfs(grid, i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        memset(vis, false, sizeof(vis));
       // int mx=0,cnt=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(!vis[i][j]&&grid[i][j]==1)
                {
                    cnt=0;
                    dfs(grid,i,j);
                    mx=max(cnt,mx);
                }
            }
        }
        return mx;
    }
};
