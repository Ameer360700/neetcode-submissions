class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        int n=nums.size();
        unordered_map<int,int>ansmap;
        for(int i=0;i<n;i++)
        {
            ansmap[nums[i]]++;
        }
        bool hasValue1 = false;
        for (const auto& [key, val] : ansmap)
        {
               if (val > 1) {
                 hasValue1 = true;
                  break;
             }
        }
        return hasValue1;
        
    }
};