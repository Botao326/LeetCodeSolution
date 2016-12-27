//
// Created by Tao on 4/12/2016.
//
#include <stack>
using namespace std;


class MinStack {
private:
    stack<int> min;
    stack<int> data;

public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        if (min.empty()){
            data.push(x);
            min.push(x);
        }

        else {
            data.push(x);
            if (x <= min.top())
                min.push(x);
        }
    }

    void pop() {
        if (min.top() == data.top())
            min.pop();
        data.pop();
    }

    int top() {
        return data.top();
    }

    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */