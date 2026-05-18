class MinStack {
private:
    vector<int>mp;
    vector<int>minstack;
public:
    MinStack() {

    }
    
    void push(int val) {
        if(minstack.empty() || val <= minstack.back())
        {
            minstack.push_back(val);
        }
        mp.push_back(val);
    }
    
    void pop() {
        if(mp.back() == minstack.back())
        {
            mp.pop_back();
            minstack.pop_back();
        }
        else mp.pop_back();
    }
    
    int top() {
        return mp.back();
    }
    
    int getMin() {
        return minstack.back();
    }
};
