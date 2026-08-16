#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   bool iftrue=false;
   void fun(vector<int>& matchsticks,int index,int left,int right, int top, int bottom, int target)
   {
      if(left==target&&right==target&&top==target&&bottom==target)
      {
        iftrue=true;
        return;
      }
      if(index>=matchsticks.size())
      {
        return;
      }
      if(left+matchsticks[index]<=target)
      {
         fun(matchsticks,index+1,left+matchsticks[index],right,top,bottom,target);
      }
       if(right+matchsticks[index]<=target)
      {
         fun(matchsticks,index+1,left,right+matchsticks[index],top,bottom,target);
      }
       if(top+matchsticks[index]<=target)
      {
         fun(matchsticks,index+1,left,right,top+matchsticks[index],bottom,target);
      }
       if(bottom+matchsticks[index]<=target)
      {
         fun(matchsticks,index+1,left,right,top,bottom+matchsticks[index],target);
      }

   }
    bool makesquare(vector<int>& matchsticks) {
      int sum=0;
      for(int i=0;i<matchsticks.size();i++)
      {
        sum=sum+matchsticks[i];
      }
      if(sum%4==0)
      {
        int target=sum/4;
        int left=0,right=0,bottom=0,top=0;
        fun(matchsticks,0,left,right,top,bottom,target);
        if(iftrue)return true;
        else return false;
      }
      else
      {
        return false;
      }
    }
};