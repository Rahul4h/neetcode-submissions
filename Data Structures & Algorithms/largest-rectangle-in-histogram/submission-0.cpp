class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>>st;
        int mx=0;
        for(int i=0;i<heights.size();i++)
        {
            if(st.empty()|| st.top().second<heights[i])
            {
                st.push({i,heights[i]});
            }
            else
            {
                int x=0;
                while(!st.empty()&&st.top().second>=heights[i])
                {
                  
                   x=st.top().first;
                   mx=max(mx,(st.top().second*(i-x)));
                   st.pop();
                }
                st.push({x,heights[i]});

            }
        }
        int z=heights.size();
        while(!st.empty())
        {
            mx=max(mx, (st.top().second*(z-st.top().first)));
            st.pop();
        }
        return mx;
    }
};
