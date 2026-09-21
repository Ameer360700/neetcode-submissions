class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int>seen;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int compliment=target-nums[i];
            if(seen.count(compliment)==1)
            {
                return {seen[compliment],i};
            }
            seen[nums[i]]=i;
        }
        
        
    }
};
