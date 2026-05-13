class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int,int>mp;
       //bool f=false;
       for(int i=0;i<nums.size();i++)
       {
        
        mp[nums[i]]++;
       }
       int x=nums.size(),y;
       for(auto it:mp)
       {
        if(it.second>(x/2))
        {
            
            y=it.first;
            break;
        }
       }
        return y;
       
    }
};