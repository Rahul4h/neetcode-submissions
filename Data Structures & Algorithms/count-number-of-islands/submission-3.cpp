#include<bits/stdc++.h>
using namespace std;
class Solution {
    

public:
   static const int N=110;
    bool vis[N][N];
    void dfs(vector<vector<char>>& grid,int i,int j)
    {
        if(grid[i][j]=='0')
        {
            return;
        }
        if(vis[i][j])
        {
            return;
        }
        vis[i][j]=true;
        if(i>0&& i<grid.size()-1)
        {
           dfs(grid,i+1,j);
           dfs(grid,i-1,j);
        }
        if(i==0&& i<grid.size()-1)
        {
           dfs(grid,i+1,j);
          // dfs(grid,i-1,j);
        }
        if(i>0&& i==grid.size()-1)
        {
           //dfs(grid,i+1,j);
           dfs(grid,i-1,j);
        }
        if(j>0&&j<grid[0].size()-1)
        {
            dfs(grid,i,j+1);
            dfs(grid,i,j-1);
        }
        if(j==0&&j<grid[0].size()-1)
        {
            dfs(grid,i,j+1);
            //dfs(grid,i,j-1);
        }
        if(j>0&&j==grid[0].size()-1)
        {
            //dfs(grid,i,j+1);
            dfs(grid,i,j-1);
        }

            
            
        
    }
    int numIslands(vector<vector<char>>& grid) {
        memset(vis, false, sizeof(vis));
        int cnt=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(!vis[i][j]&&grid[i][j]=='1')
                {
                    cnt++;
                    dfs(grid, i, j);
                    //cnt++;
                }
            }
        }
        return cnt;
    }
};
