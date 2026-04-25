#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   static const int N=210;
   bool vis[N][N];
   void dfs(vector<vector<char>>& board, int row, int col)
   {
    if((row<0||row>=board.size())||(col<0||col>=board[0].size()))
    {
        return;
    }

    if(vis[row][col]==true)
    {
        return;
    }
    if(board[row][col]!='O')
    {
        return;
    }
    vis[row][col]=true;
    dfs(board, row+1, col);
    dfs(board, row-1, col);
    dfs(board, row, col+1);
    dfs(board, row, col-1);
   }

    void solve(vector<vector<char>>& board) {
        memset(vis, false, sizeof(vis));
        for(int i=0;i<board[0].size();i++)
        {
            if(board[0][i]=='O')
            {
            dfs(board, 0, i);
            }
        }
        for(int i=0;i<board[0].size();i++)
        {
            if(board[board.size()-1][i]=='O')
            {
            dfs(board, board.size()-1, i);
            }
        }
        for(int i=0;i<board.size();i++)
        {
            if(board[i][0]=='O')
            {
            dfs(board, i, 0);
            }
        }
        for(int i=0;i<board.size();i++)
        {
            if(board[i][board[0].size()-1]=='O')
            {
            dfs(board, i, board[0].size()-1);
            }
        }
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(vis[i][j]==false)
                {
                    board[i][j]='X';
                }
            }
        }
    }
};
