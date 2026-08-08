class Solution {
public:
    int hammingWeight(uint32_t n) {

      int count = 0;
    while (n != 0) {
        count += n & 1;   // check the last bit
        n >>= 1;          // shift right by 1
    }
    return count;
    }
};
