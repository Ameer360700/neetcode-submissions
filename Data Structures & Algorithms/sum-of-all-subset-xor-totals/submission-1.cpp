class Solution {
private:
     
     int total=0;
     void backtrack(vector<int>&nums,int start,int currentXOR)
     {
        total+=currentXOR; //ALL THE partial paths, but the reason for adding this at the very start is because empty set is also a subset
        for(int i=start;i<nums.size();i++)
        {
            backtrack(nums,i+1,currentXOR^nums[i]);
        }
     }

public:
    
    int subsetXORSum(vector<int>& nums) 
    {
         total = 0;
         backtrack(nums, 0, 0);
         return total;
    }
};