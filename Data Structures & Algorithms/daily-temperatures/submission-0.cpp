class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        map<int,int>mp;
        //int cn=0;
        //int res=temperatures[0];
        st.push(0);
        for(int i=1;i<temperatures.size();i++)
        {
          if(temperatures[i]>temperatures[st.top()])
          {
            while(!st.empty()&&temperatures[st.top()]<temperatures[i])
            {
             mp[st.top()]=i-st.top();
             st.pop();
            }
           // st.push(i);

          }
           st.push(i);
          
        }
        while(!st.empty())
        {
            mp[st.top()]=0;
            st.pop();
            //cn++;

        }
        vector<int>v;
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        return v;
    }
};
