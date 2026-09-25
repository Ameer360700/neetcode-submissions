class Solution {
private:

int total = 0;

void backtrack(vector<int>& nums, int start, int currentXor) {
    total += currentXor;   // every partial state is a valid subset — record its XOR immediately

    for (int i = start; i < nums.size(); i++) {
        // CHOOSE: include nums[i] -> XOR it in
        backtrack(nums, i + 1, currentXor ^ nums[i]);   // EXPLORE
        // UN-CHOOSE: nothing to undo explicitly — currentXor is passed BY VALUE,
        // so each recursive call gets its own independent copy automatically
    }
}

public:
    int subsetXORSum(vector<int>& nums) {
         total = 0;
    backtrack(nums, 0, 0);
    return total;
    }
};