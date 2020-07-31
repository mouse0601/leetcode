class MyStack {
public:
    queue<int> qi;//½øÕ»
    queue<int> qt;//³öÕ»
    /** Initialize your data structure here. */
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        qi.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(!qt.empty())
        {
            qt.pop();
        }
        while(qi.size())
        {
            qt.push(qi.front());
            qi.pop();
        }
        while(qt.size() > 1)
        {
            qi.push(qt.front());
            qt.pop();
        }
        return qt.front();
    }
    
    /** Get the top element. */
    int top() {
        while(!qt.empty())
        {
            qt.pop();
        }
        while(qi.size())
        {
            qt.push(qi.front());
            qi.pop();
        }
        while(qt.size() > 1)
        {
            qi.push(qt.front());
            qt.pop();
        }
        qi.push(qt.front());
        return qt.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return qi.empty();
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
