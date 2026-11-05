class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       if(nums.size()==1) return nums;
       int a=nums[0],b=nums[1];
       int cnt1=0,cnt2=0;
       for(int i=0;i<nums.size();i++)
       {
          if(nums[i]==a) cnt1++;
          else if(nums[i]==b) cnt2++;
          else if(cnt1==0) {
            a=nums[i];
            cnt1=1;
          }
          else if(cnt2==0){
            b=nums[i];
            cnt2=1;
          }
          else
          {
            if(cnt1>0) cnt1--;

           // cnt1--;
            if(cnt2>0) cnt2--;
          }

       }
       cnt1=cnt2=0;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==a) cnt1++;
        else if(nums[i]==b) cnt2++;
       }
       vector<int>res;
       if(cnt1>nums.size()/3) res.push_back(a);
       if(cnt2>nums.size()/3) res.push_back(b);
       return res;
    }
};