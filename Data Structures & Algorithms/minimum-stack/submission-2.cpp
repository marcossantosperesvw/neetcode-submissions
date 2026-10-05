class MinStack {
private:
    vector<int> pilha;
    vector<int> min_stack;
public:
    
    MinStack() {
    }
    
    void push(int val) {   
        if (pilha.empty()) {
            pilha.push_back(val);
            min_stack.push_back(val);
        }
        else {
            int min = min_stack.back();
            if (min < val) {
                min_stack.push_back(min);
            } else {
                min_stack.push_back(val);
            }
            pilha.push_back(val);

        }
        
    }
    
    void pop() {
        pilha.pop_back();
        min_stack.pop_back();


        
    }
    
    int top() {
        return pilha.back();
    }
    
    int getMin() {
        return  min_stack.back();
        
    }
};
