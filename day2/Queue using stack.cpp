class MyQueue {
private:
int top;
int arr[1000];
int rear;
int front;
public:
    MyQueue() {
        top=-1;
        rear=0;
        front=0;}
    
    void push(int x) {
        arr[rear]=x;
        rear++;
    }
    
    int pop() {
        int el=arr[front];
        front++;
        return el;
    }
    
    int peek() {
        int el=arr[front];
        return el;
        
    }
    
    bool empty() {
        if(front==rear){
            return 1;
        }
        return 0;
        
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
