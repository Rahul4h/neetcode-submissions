class Solution {
public:
   void fun(int n,stack<char>st,string s, vector<string>&v)
   {
      if(n==0&&st.empty())
      {
        v.push_back(s);
        

        return ;
      }
      else if(st.empty())
      {
        st.push('(');
        s.push_back('(');
        fun(n-1,st,s,v);
         
      }
      else if(n==0)
      {
         st.pop();
        s.push_back(')');
        fun(n,st,s,v);
         
      }
      else
      {
        st.push('(');
        s.push_back('(');
        fun(n-1,st,s,v);
        s.pop_back();
        st.pop();
        st.pop();
        //st.pop();
        s.push_back(')');
        fun(n,st,s,v);
        
      }
     
   }
   
    vector<string> generateParenthesis(int n) {
        stack<char>st;
        
        vector<string>v;
        string s;
        fun(n,st,s,v);
        return v;
    }
};
