#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
bool vis[51][51];
   void fun(vector<vector<int>>& image, int sr, int sc, int color,int x)
   {

      if(sr>=image.size()||sc>=image[0].size()) return ;
      if(image[sr][sc]!=x) return;
      if(vis[sr][sc]) return;

      image[sr][sc]=color;
      vis[sr][sc]=true;

      fun(image,sr+1,sc,color,x);
      fun(image,sr,sc+1,color,x);
       fun(image,sr-1,sc,color,x);
        fun(image,sr,sc-1,color,x);

   }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        memset(vis,false,sizeof(vis));
        int x=image[sr][sc];
      fun(image,sr,sc,color,x);
      return image;
    }
};