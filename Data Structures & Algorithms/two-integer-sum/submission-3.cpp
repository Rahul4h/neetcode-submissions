class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(make_pair(nums[i],i));
        }
       sort(v.begin(),v.end());
      int h=v.size()-1,l=0,x,y;
      while(h>l)
      {
        if(v[h].first+v[l].first>target)
        {
            h--;
        }
        else if(v[h].first+v[l].first<target)
        {
            l++;
        }
        else
        {
            x=min(v[h].second,v[l].second);
            y=max(v[h].second,v[l].second);
            break;
        }
      }
      vector<int>u={x,y};
      return u;
       
    }
       

};
