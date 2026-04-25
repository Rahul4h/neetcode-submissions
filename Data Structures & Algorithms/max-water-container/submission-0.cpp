class Solution {
public:
    int maxArea(vector<int>& heights) {
      int l=0,h=heights.size()-1,sm=0,mx=0;
      while(h>l)
      {
        if(heights[l]>heights[h])
        {
            sm=heights[h]*(h-l);
            h--;
        }
        else
        {
            sm=heights[l]*(h-l);
            l++;
        }
        mx=max(mx,sm);
      }
      return mx;
    }
};
