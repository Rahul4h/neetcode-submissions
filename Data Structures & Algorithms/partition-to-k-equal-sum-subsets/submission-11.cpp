#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   bool vis[20];
   int cnt=0;
   void markit(vector<int>& v)
   {
    for(int i=0;i<v.size();i++)
    {
      int x=v[i];
      vis[x]=true;
    }
   }
   void fun(vector<int>& nums,vector<int>& v, int index, int k,int target)
   {
     if(vis[index])
     {
       //v.pop_back();
       return;
     }
    target=target-nums[index];
    v.push_back(index);
      if(target<0)
      {
        v.pop_back();
        return;
      }
      if(target==0)
      {
          markit(v);
          cnt++;
          v.pop_back();
          return;
      }
      if(k==cnt) return;
      //if(vis[index]) return;

      //v.push_back(index);
     // target=target-nums[index];
      for(int i=index+1;i<nums.size();i++)
      {
       // v.push_back(index);
        fun(nums,v,i,k,target);
        if(vis[index])
        {
          v.pop_back();
          return;
        }
       // v.pop_back();
      }
      v.pop_back();
   }
   
    bool canPartitionKSubsets(vector<int>& nums, int k) {
      memset(vis, false, sizeof(vis));
      vector<int>v;
      int sum=0;
      sort(nums.begin(),nums.end());
      reverse(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++)
       {
        sum=sum+nums[i];
       }

       if(sum%k==0)
       {
        int target=sum/k;
         for(int i=0;i<nums.size();i++)
         {
             fun(nums,v,i,k,target);
         }
         if(cnt==k)
         {
          return true;
         }
         else
         {
          return false;
         }

       }
       else
       {
        return false;
       }
    }
};