class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>h,l;
        int mx1=0,mx2=0,sm=0;
        for(int i=0;i<height.size();i++)
        {
            mx1=max(mx1,height[i]);
            l.push_back(mx1);
        }
        for(int i=height.size()-1;i>=0;i--)
        {
            mx2=max(mx2,height[i]);
            h.push_back(mx2);
        }
        reverse(h.begin(),h.end());
        for(int i=0;i<height.size();i++)
        {
            sm=sm+max(0,(min(h[i],l[i])-height[i]));
        }
        return sm;
    }
};
