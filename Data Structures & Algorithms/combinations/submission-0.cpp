#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
static const int N=20;
vector<vector<int>>v;
vector<int>u;
   void fun(int index, int n, int k)
   {
      if(u.size()==k)
      {
        v.push_back(u);
        return;
      }
      if(index>n)
      {
        return ;
      }
      for(int i=index+1;i<=n;i++)
      {
       u.push_back(i);
       fun(i, n,k);
       u.pop_back();
      }
   }
    vector<vector<int>> combine(int n, int k) {
         fun( 0,n,  k);
         return v;
    }
};