#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
static const int N=110;

bool bis[N][N];
bool cis[N][N];
//vector<pair<int,int>>v;
void fun(vector<vector<int>>& heights,int row, int col)
 {
    if(cis[row][col]==true)
    {
        return;
    }
    if((row<0||row>=heights.size())||(col<0||col>=heights[0].size()))
    {
        return;
    }
    cis[row][col]=true;
    if(row+1 < heights.size() && heights[row][col] <= heights[row+1][col])
    {
    fun(heights,row+1,col);
    }
if(row-1 >= 0 && heights[row][col] <= heights[row-1][col])
{
    fun(heights,row-1,col);
}
if(col+1 < heights[0].size() && heights[row][col] <= heights[row][col+1])
{
    fun(heights,row,col+1);
}
if(col-1 >= 0 && heights[row][col] <= heights[row][col-1])
{
    fun(heights,row,col-1);
}
    
 }
 void dfs(vector<vector<int>>& heights,int row, int col)
 {
    if(bis[row][col]==true)
    {
        return;
    }
    if((row<0||row>=heights.size())||(col<0||col>=heights[0].size()))
    {
        return;
    }
    bis[row][col]=true;
    if(row+1 < heights.size() && heights[row][col] <= heights[row+1][col])
    dfs(heights,row+1,col);
if(row-1 >= 0 && heights[row][col] <= heights[row-1][col])
    dfs(heights,row-1,col);
if(col+1 < heights[0].size() && heights[row][col] <= heights[row][col+1])
    dfs(heights,row,col+1);
if(col-1 >= 0 && heights[row][col] <= heights[row][col-1])
    dfs(heights,row,col-1);
    
 }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        memset(bis, false, sizeof(bis));
        memset(cis, false, sizeof(cis));
       for(int i=0;i<heights.size();i++)
       {
        dfs(heights,i,0);
       }
       for(int j=0;j<heights[0].size();j++)
       {
        dfs(heights, 0,j);
       }
       for(int i=0;i<heights.size();i++)
       {
        fun(heights,i,heights[0].size()-1);
       }
       for(int j=0;j<heights[0].size();j++)
       {
        fun(heights, heights.size()-1,j);
       }
       vector<vector<int>>v;
       vector<int>u;
       for(int i=0;i<heights.size();i++)
       {
        for(int j=0;j<heights[0].size();j++)
        {
            if(bis[i][j]==true&& cis[i][j]==true)
            {
                u.push_back(i);
                u.push_back(j);
                v.push_back(u);
                u.clear();
            }
        }
       }
       return v;
    }
};
