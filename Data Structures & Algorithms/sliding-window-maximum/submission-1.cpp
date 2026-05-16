class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //int mx=-10010;
        priority_queue<pair<int,int>>qe;
        vector<int>v;
       int l=0,h=0;
       while(h<nums.size())
       {
        qe.push({nums[h],h});
        if(h>=k-1)
        {
            if(h==k-1)
            {
           v.push_back(qe.top().first);
            }
            else
            {
                if(nums[l-1]==qe.top().first)
                {
                    int x=l-1;
                while(true)
                {
                  if(qe.top().second<=x)
                  {
                    qe.pop();
                  }
                  else
                  {
                    break;
                  }
                }
                }
                v.push_back(qe.top().first);
                
            }
            h++;
            l++;

        }
        else
        {
            h++;
        }
       }
       return v;
        
    }
};
