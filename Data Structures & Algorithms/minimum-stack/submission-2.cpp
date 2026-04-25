class MinStack {
public:
   stack<int>MiStack;
    MinStack() {
        stack<int>MinStack;
        
    }
    
    void push(int val) {
    MiStack.push(val);
   
        
    }
    
    void pop() {

        MiStack.pop();
    }
    
    int top() {
        return MiStack.top();
    }
    
    int getMin() {
        vector<int>v;
        int mn=INT_MAX;
        while(!MiStack.empty())
        {
         v.push_back(MiStack.top());
         mn=min(mn,MiStack.top());
         MiStack.pop();
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            MiStack.push(v[i]);
        }
        return mn;
    }
};
