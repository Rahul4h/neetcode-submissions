class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int c=0,d=0;
        if(n>0)
        {
        while(c<nums1.size())
        {
            if(nums1[c]>nums2[d])
            {
                for(int i=nums1.size()-1;i>c;i--)
                {
                   
                  nums1[i]=nums1[i-1];
                }
                nums1[c]=nums2[d];
                d++;
                
            }
            else
            {
                c++;
            }
            if(d==nums2.size())
            {
                break;
            }
        }
        if(d<nums2.size())
        {
            int cn=nums2.size()-1;
            for(int i=nums1.size()-1;i>=0;i--)
            {
                nums1[i]=nums2[cn];
                if(cn==d)
                {
                    break;
                }
                cn--;
            }
        }
        }
       
    }
};