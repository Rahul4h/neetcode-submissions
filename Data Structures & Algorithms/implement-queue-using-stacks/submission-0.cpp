class MyQueue {
 private:
 stack<int>st,mt;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
        
    }
    
    int pop() {
        int x;
        while(!st.empty())
        {
            mt.push(st.top());
            st.pop();
        }
        x=mt.top();
        mt.pop();
        while(!mt.empty())
        {
            st.push(mt.top());
            mt.pop();
        }
        return x;
    }
    
    int peek() {

         int x;
        while(!st.empty())
        {
            mt.push(st.top());
            st.pop();
        }
        x=mt.top();
       // mt.pop();
        while(!mt.empty())
        {
            st.push(mt.top());
            mt.pop();
        }
        return x;
        
    }
    
    bool empty() {
        if(st.empty()) return true;
        else return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */