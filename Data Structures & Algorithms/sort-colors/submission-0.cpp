class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==2)
            {
                cnt++;
            }
        }
        vector<int>v;
        int a=cnt;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(a==0)
            {
                break;
            }
           if(nums[i]==2)
           {
            cnt--;
           }
           a--;
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]!=2 && cnt>0)
            {
                v.push_back(i);
                cnt--;
            }
        }
        //int m=0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]==2&&v.size()>0)
            {
                int x=v[v.size()-1];
                int c=nums[x];
                nums[i]=c;
                nums[x]=2;
                v.pop_back();
            }
        }
         int cnt2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                cnt2++;
            }
        }
        vector<int>u;
        int b=cnt2;
        for(int i=0;i<nums.size();i++)
        {
            if(b==0)
            {
                break;
            }
           if(nums[i]==0)
           {
            cnt2--;
           }
           b--;
        }
         for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0 && cnt2>0)
            {
                u.push_back(i);
                cnt2--;
            }
        }
        for (int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==0&&u.size()>0)
            {
                int x=u[u.size()-1];
                int c=nums[x];
                nums[i]=c;
                nums[x]=0;
                u.pop_back();
            }
        }


    }
};