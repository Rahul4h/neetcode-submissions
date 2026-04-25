class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int x=nums.size();
       vector<bool>vis(x,false);
       int z=k%x;
       if(z==0)
       {
         //continue;
       }
      else if((z*2)==x)
       {
         for(int i=0;i<z;i++)
         {
            int sw=nums[i+z];
            nums[i+z]=nums[i];
            nums[i]=sw;
         }
       }
       else
       {

       
       int cnt=1;
       int s=x;
       int sw=nums[cnt-1];
       while(s--)
       {
        int cnt2=(cnt+z)%x;
        if(cnt2==0)
        {
            cnt2=x;
        }
        if(vis[cnt2])
        {
            cnt=(cnt2+1)%x;
            if(cnt==0)
            {
                cnt=x;
            }
            sw=nums[cnt-1];
         cnt2=(cnt+z)%x;
        if(cnt2==0)
        {
            cnt2=x;
        }

        }
        vis[cnt2]=true;
        
        int res=nums[cnt2-1];
        nums[cnt2-1]=sw;
        cnt=cnt2;
        sw=res;

       }
       }

    }
};