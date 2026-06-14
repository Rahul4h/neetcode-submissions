
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool a[110][110];
    int islandPerimeter(vector<vector<int>>& grid) {
        memset(a, false, sizeof(a));
        int x=-1;
       for(int i=0;i<grid.size();i++)
       {
        for(int j=0;j<grid[0].size();j++)
        {
            if(grid[i][j]==1)
            {
                 x= dfs(grid, i,j);
                break;
            }
        }
        if(x>-1)
        {
            break;
        }
       }

       return x;
    }
    int dfs(vector<vector<int>>& grid, int i, int j)
    {
        if(i<0 || j<0 || i>=grid.size()|| j>=grid[0].size())
        {
            return 1;
        }
        if(a[i][j])
        {
            return 0;
        }
        if(grid[i][j]==0)
        {
            return 1;
        }
        a[i][j]=true;
        int cnt=0;
        cnt+=dfs(grid,i-1,j);
        cnt+=dfs(grid,i+1,j);
        cnt+=dfs(grid,i,j-1);
        cnt+=dfs(grid,i,j+1);
       return cnt;
    }
};


