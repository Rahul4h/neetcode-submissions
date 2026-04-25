class Solution {
public:
    string simplifyPath(string path) {
        stack<char>st;
        int cnt=0;
        string s;
        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='/'&&!st.empty()&&st.top()==path[i])
            {
                  continue;
            }
            else if(path[i]=='/'&&cnt<=2&&!st.empty()&&st.top()=='.')
            {
                if(cnt==2)
                {
                    while(!st.empty()&&st.top()!='/')
                    {
                        st.pop();
                    }
                    if(st.size()>1)
                    {
                    st.pop();
                    }
                    while(!st.empty()&&st.top()!='/')
                    {
                        st.pop();
                    }
                    
                    cnt=0;
                }
                else
                {
                    while(!st.empty()&&st.top()!='/')
                    {
                        st.pop();
                    }
                    cnt=0;
                }
                
            }
            else
            {
                 if((path[i]=='.'&&i>0&&path[i-1]=='/')||(path[i]=='.'&&cnt>0))
                 {
                    cnt++;
                 }
                 else
                 {
                    cnt=0;
                 }
                 st.push(path[i]);
            }
        }
        
        if(cnt==2)
        {
                   st.pop();
                   st.pop();
                    if(st.size()>1)
                    {
                    st.pop();
                    }
                    while(!st.empty()&&st.top()!='/')
                    {
                        st.pop();
                    }
                    
                    cnt=0;
        }
        if(cnt==1)
        {
             while(!st.empty()&&st.top()!='/')
                    {
                        st.pop();
                    }
                    cnt=0;
        }
        if(!st.empty()&&st.top()=='/'&&st.size()>1)
        {
            st.pop();
        }
        while(!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};