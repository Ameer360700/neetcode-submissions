class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
      int ans = 0;
    for (int number : nums) {
        ans = ans ^ number;
    }
    return ans;
 
    }
};
