class StockSpanner {
public:
   stack<int>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        vector<int>v;
        int cnt=1;
        while(!st.empty())
        {
           if(st.top()<=price)
           {
            v.push_back(st.top());
            st.pop();
            cnt++;
           }
           
              
              else
              {
              break;
              }
        }
        for(int i=v.size()-1;i>=0;i--)
              {
                st.push(v[i]);
              }

        st.push(price);
        v.clear();
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */