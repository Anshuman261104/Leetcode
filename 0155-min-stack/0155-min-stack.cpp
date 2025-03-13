class MinStack {
public:
    MinStack() {}
    stack<int> s1, minTillNow;
    void push(int val) {
        if (s1.empty()) {// If stack is empty, then push val without any check in both stacks.
            s1.push(val);
            minTillNow.push(val);
        } 
        
        else {
            minTillNow.push(min(minTillNow.top(), val));//check whether new 'val' is less than previously stored minimum value(i.e. top element of the second stack).
            s1.push(val);
        }
    }

    void pop() {
        s1.pop();
        minTillNow.pop();
    }

    int top() { return s1.top(); }

    int getMin() { return minTillNow.top(); }
};