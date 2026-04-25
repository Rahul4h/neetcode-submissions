#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
static const int N=110;
bool vis[N][N];

   
    void islandsAndTreasure(vector<vector<int>>& grid) {
        memset(vis, false, sizeof(vis));
        queue<pair<int,int>>qe;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)
                {
                    vis[i][j]=true;
                    
                       
                        qe.push(make_pair(i,j));
                         
                    

                }
            }
        }
        while(!qe.empty())
        {
              int i=qe.front().first, j=qe.front().second;
              qe.pop();
              //vis[i][j]=true;
                if(i+1<grid.size())
                    {
                        if(grid[i+1][j]!=-1&&!vis[i+1][j]) 
                        {//continue;
                        grid[i+1][j]=1+grid[i][j];
                        qe.push(make_pair(i+1,j));
                         vis[i+1][j]=true;
                        }
                    }
                    if(i-1>=0)
                    {
                        if(grid[i-1][j]!=-1&&!vis[i-1][j]) 
                        {
                        grid[i-1][j]=1+grid[i][j];
                        qe.push(make_pair(i-1,j));
                         vis[i-1][j]=true;
                        }
                    }
                    if(j+1<grid[0].size())
                    {

                        if(grid[i][j+1]!=-1&&!vis[i][j+1]) 
                        {
                        grid[i][j+1]=1+grid[i][j];
                        qe.push(make_pair(i,j+1));
                         vis[i][j+1]=true;
                        }
                    }
                    if(j-1>=0)
                    {
                       if(grid[i][j-1]!=-1&&!vis[i][j-1]) 
                        {
                        grid[i][j-1]=1+grid[i][j];
                        qe.push(make_pair(i,j-1));
                         vis[i][j-1]=true;
                        }
                    }

        }
        
       
    }
};
