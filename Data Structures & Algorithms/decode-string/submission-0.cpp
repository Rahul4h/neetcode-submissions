class Solution {
public:
    string decodeString(string s) {
        //string a;
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=']')
            {
                st.push(s[i]);
            }
            else
            {
                string a,b;
                while(!st.empty() && st.top()!='[')
                {
                    a.push_back(st.top());
                    st.pop();
                }
                st.pop();
                while(!st.empty() && st.top()>='0'&&st.top()<='9')
                {
                  b.push_back(st.top());
                  st.pop();
                }
                reverse(a.begin(),a.end());
                reverse(b.begin(),b.end());
                int x=stoi(b);
                string c;
                for(int i=1;i<=x;i++)
                {
                  c=c+a;
                }
                for(int i=0;i<c.size();i++)
                {
                    st.push(c[i]);
                }
            }
        }
        string z;
        while(!st.empty())
        {
            z.push_back(st.top());
            st.pop();
        }
        reverse(z.begin(),z.end());
        return z;
    }
};