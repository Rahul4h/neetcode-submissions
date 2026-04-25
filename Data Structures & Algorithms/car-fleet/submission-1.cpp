class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>>v;
        for(int i=0;i<position.size();i++)
        {
            double a=(double)(target-position[i])/(double)speed[i];
            v.push_back(make_pair(position[i],a));
        }
        sort(v.begin(),v.end());
        stack<double>st;
        st.push(v[0].second);
        for(int i=1;i<v.size();i++)
        {
            if(v[i].second>=st.top())
            {
                while(!st.empty()&&v[i].second>=st.top())
                {
                    st.pop();
                }
            }
            st.push(v[i].second);

        }
        int c=st.size();
        return c;
    }
};
