#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

  bool vis[6][6];
  vector<string>v;
    void fun(vector<vector<char>>& board, string word,string s,int n, int m)
    {
       //vis[n][m]=true;
       if(s.size()==word.size())
       {
         v.push_back(s);
         s.pop_back();
         return;
       }
       if(n<0 || n>=board.size() || m<0 || m>=board[0].size())
       {
        return;
       }
       if(vis[n][m])
       {
        return;
       }
       vis[n][m]=true;
       s.push_back(board[n][m]);
       fun(board,word,s,n-1,m);
       fun(board,word,s,n+1,m);
       fun(board,word,s,n,m+1);
       fun(board,word,s,n,m-1);
       vis[n][m]=false;
      // s.pop
     // return;
       
    }
    bool exist(vector<vector<char>>& board, string word) {
       //vector<bool> vis[6][6];
       memset(vis, false, sizeof(vis));
     
       string s;
       bool f=false;
       int p=-1,q=-1;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                //memset(vis, false, sizeof(vis));
                fun(board,word,s,i,j);
            }
        }
       for(int i=0;i<v.size();i++)
       {
        if(v[i]==word)
        {
            f=true;
        }
       }

        return f;
    }
};
