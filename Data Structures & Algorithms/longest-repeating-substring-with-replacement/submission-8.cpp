class Solution {
public:
    int characterReplacement(string s, int k) {
       
       int cnt=0,mx=0,l=0,h=0;
       int z=k;
       for(char ch='A'; ch<='Z';ch++) 
       {
          l=0;
          h=0;
          k=z;
          queue<int>st;
         while(h<s.size()&&l<s.size())
         {
            if(s[h]==ch)
            {
                mx=max(mx,h-l+1);
                h++;
            }
            else
            {
                if(k>0)
                {
                    st.push(h);
                    k--;
                    mx=max(mx,h-l+1);
                    h++;
                }
                else
                {
                    if(!st.empty()&&l==st.front())
                    {
                        k++;
                    
                        
                    st.pop();
                    }
                    
                    mx=max(mx,h-l);
                    if(h==l)
                    {
                        h++;
                    }
                    l++;
                    
                }
            }
         }
        mx=max(mx,h-l);
       }
       return mx;
    }
};
