class MyStack {

private:
    queue<int>qe,me;

public:
    MyStack() {
        
    }
    
    void push(int x) {
        qe.push(x);

        
    }
    
    int pop() {
        int x;
        while(!qe.empty())
        {
            me.push(qe.front());
            qe.pop();
        }
        while(me.size()>1)
        {
            qe.push(me.front());
            me.pop();
        }
        x=me.front();
        me.pop();
        return x;
        
    }
    
    int top() {
        int x;
        while(!qe.empty())
        {
            if(qe.size()==1) 
            {
               x=qe.front() ;
            }
            me.push(qe.front());
            qe.pop();
        }
        
        while(!me.empty())
        {
            qe.push(me.front());
            me.pop();
        }
        //me.pop();
        return x;
        
    }
    
    bool empty() {
        if(!qe.empty()) return false;
        else return true;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */