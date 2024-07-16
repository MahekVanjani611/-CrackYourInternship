class MyStack {
private:
int topp;
int arr[100];
public:
    MyStack() {
        topp=-1;

}
    
    void push(int x) {
        topp++;
        arr[topp]=x;
        
    }
    
    int pop() {
        if(topp==-1) return -1;
        int el=arr[topp];
        topp--;
        return el;
    }
    
    int top() {
        int peek=arr[topp];
        return peek;

        
    }
    
    bool empty() {
        if(topp==-1){
            return 1;
        }
        return 0;

        
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
