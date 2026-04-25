class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
      for(int i=0;i<tokens.size();i++)
      {
        string s=tokens[i];
        if((s.size()==1)&&(s[0]==42||s[0]==43||s[0]==45||s[0]==47))
        {
           int b=st.top();
           st.pop();
           int a=st.top();
           st.pop();
           if(s[0]==42)
           {
            st.push(a*b);
           }
           if(s[0]==43)
           {
            st.push(a+b);
           }
           if(s[0]==45)
           {
            st.push(a-b);
           }
           if(s[0]==47)
           {
            st.push(a/b);
           }
        }
      
      else
      {
        st.push(stoi(tokens[i]));
      }
    }
      return st.top();
    }

};
