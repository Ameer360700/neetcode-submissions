class Solution {
private:
    vector<int> stk;

    void push(int val) {
        stk.push_back(val);
    }
    bool isEmpty() {
        return stk.empty();
    }
    int pop() {
        if (isEmpty()) throw std::runtime_error("Stack is empty");
        int top = stk.back();
        stk.pop_back();
        return top;
    }
    int peek() {
        if (isEmpty()) throw std::runtime_error("Stack is empty");
        return stk.back();
    }

public:
    int calPoints(vector<string>& operations) {
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int n = stk.size();
                push(stk[n-1] + stk[n-2]);
            }
            else if (operations[i] == "C") {
                pop();
            }
            else if (operations[i] == "D") {
                push(peek() * 2);
            }
            else {
                push(std::stoi(operations[i]));
            }
        }

        int result = 0;
        for (int val : stk) {
            result += val;
        }
        return result;
    }
};