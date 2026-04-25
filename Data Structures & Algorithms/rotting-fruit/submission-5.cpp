#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
 queue<pair<int,int>>qe;
 static const int N=20;
 bool vis[N][N];
 //bool f=false;

  void addque(int a, int b, int n,int m,vector<vector<int>>& grid)
  {
     if(a<0 || a>=n || b<0 || b>=m || vis[a][b]==true|| grid[a][b]!=1)
     {
        return ;
     }
     vis[a][b]=true;
     //f=true;
     qe.push(make_pair(a,b));
  }

    int orangesRotting(vector<vector<int>>& grid) {
        //queue<pair<int,int>>qe;
        memset(vis, false, sizeof(vis));
        int cnt=0;
        bool f=true;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==2)
                {
                    qe.push(make_pair(i,j));
                    vis[i][j]=true;
                }
            }
        }
        while(!qe.empty())
        {
            int x=qe.size();
            for(int i=1;i<=x;i++)
            {
                int a=qe.front().first,b=qe.front().second;
                qe.pop();
                addque(a-1,b, grid.size(),grid[0].size(),grid);
                addque(a,b-1, grid.size(),grid[0].size(), grid);
                addque(a+1,b, grid.size(),grid[0].size(), grid);
                addque(a,b+1,grid.size(),grid[0].size(), grid);


            }
            
            cnt++;
            
            //f=false;
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1&& vis[i][j]==false)
                {
                    f=false;
                    break;
                }
            }
            if(!f)
            {
                break;
            }
        }
        if(f )
        {
            if(cnt>0)
            {
        return cnt-1;
            }
            else
            {
                return cnt;
            }
        }
        else
        {
            return -1;
        }

    }
};
