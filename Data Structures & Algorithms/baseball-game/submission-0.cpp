class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sm=0;
        for(int i=0;i<operations.size();i++)
        {
              if(operations[i]=="+")
              {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c=a+b;
                st.push(b);
                st.push(a);
                st.push(c);
              }
             else if(operations[i]=="D")
              {
                int a=st.top();
                st.push(a*2);
              }
             else if(operations[i]=="C")
              {
                st.pop();
              }
              else
              {
                int a=stoi(operations[i]);
                st.push(a);
              }
        }
        while(!st.empty())
        {
            sm=sm+st.top();
            st.pop();
        }
        return sm;
    }
};