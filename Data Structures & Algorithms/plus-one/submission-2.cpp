class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;      // no carry, done
        }
        digits[i] = 0;          // 9 becomes 0, carry continues left
    }
    digits.insert(digits.begin(), 1);   // all were 9s: 999 -> 1000
    return digits;
    }
};
