class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        bool f=true;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    f=false;
                    break;
                }
               else if(s[i]==')'&&st.top()=='(')
                {
                    st.pop();
                    continue;
                }
                else if (s[i]==']'&&st.top()=='[')
                {
                    st.pop();
                    continue;
                }
                 else if (s[i]=='}'&&st.top()=='{')
                {
                    st.pop();
                    continue;
                }
                else 
                {
                    f=false;
                    break;
                }
                 
            }
        }
        if(st.size()>0)
        {
            f=false;
        }
        return f;
    }
};
