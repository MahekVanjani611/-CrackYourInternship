class twoStacks {
    int* arr;
    int size;
    int top1, top2;

public:
    // Default Constructor
    twoStacks() : size(100), top1(-1), top2(100) {
        arr = new int[size];
    }

    // Constructor with size parameter
    twoStacks(int n) : size(n), top1(-1), top2(n) {
        arr = new int[size];
    }

    // Destructor
    ~twoStacks() {
        delete[] arr;
    }

    // Push an element into stack 1
    void push1(int x) {
        if (top1 < top2 - 1) {
            arr[++top1] = x;
        } else {
            throw std::overflow_error("Stack Overflow for stack 1");
        }
    }

    // Push an element into stack 2
    void push2(int x) {
        if (top2 > top1 + 1) {
            arr[--top2] = x;
        } else {
            throw std::overflow_error("Stack Overflow for stack 2");
        }
    }

    // Pop an element from stack 1
    int pop1() {
        if (top1 >= 0) {
            return arr[top1--];
        } else {
            throw std::underflow_error("Stack Underflow for stack 1");
        }
    }

    // Pop an element from stack 2
    int pop2() {
        if (top2 < size) {
            return arr[top2++];
        } else {
            throw std::underflow_error("Stack Underflow for stack 2");
        }
    }
};
