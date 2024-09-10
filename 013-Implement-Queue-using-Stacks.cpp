// https://leetcode.com/problems/implement-queue-using-stacks

class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    public:
    void ins(){
        while(input.empty()!=true){
            output.push(input.top());
            input.pop();
        }
    }
    MyQueue() {
            
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        // if(input.empty())   return -1;
        if(!output.empty()){
            int val = output.top();
            output.pop();
            return val;
        }
        ins();
        int val = output.top();
        output.pop();
        return val;
    }
    
    int peek() {
        // if(input.empty())   return -1;
        if(!output.empty()){
            return output.top();
        }
        ins();
        return output.top();
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};
