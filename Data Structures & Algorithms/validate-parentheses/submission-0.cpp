class Solution {

private:
      
      vector<char>stk;
      void push(char s)
      {
          stk.push_back(s);
      }
      bool isEmpty()
      {
          return stk.empty();
      }
      char pop()
      {
          if(isEmpty())
          {
            throw std::runtime_error("Stack is Empty");
          }
          char popped=stk.back();
          stk.pop_back();
          return popped;
      }
public:
    bool isValid(string s) {
        
        for (char chr : s) {
            if (chr == '(' || chr == '{' || chr == '[') {
                push(chr);
            }
            else if (chr == ')') {
                if (isEmpty() || pop() != '(') return false;
            }
            else if (chr == ']') {
                if (isEmpty() || pop() != '[') return false;
            }
            else if (chr == '}') {
                if (isEmpty() || pop() != '{') return false;
            }
        }
        return isEmpty();   // valid only if nothing is left unmatched


    }
};
