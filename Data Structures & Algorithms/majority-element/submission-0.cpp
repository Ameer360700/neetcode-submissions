class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int>freq;
        int ans;
        int n=nums.size();
        for(int number : nums)
        {
            freq[number]++;
        }
        int max=0;
        for(auto&[actualnum,frequency] : freq)
        {
             if(max<frequency)
             {
                max=frequency;
                ans=actualnum;
             }
        }
        return ans;
        
    }
};