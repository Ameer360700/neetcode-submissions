class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans(2);
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int num2=target-nums[i];
            for(int j=i+1;j<n;j++)
            {
                if(num2==nums[j])
                {
                    if(i<j)
                    {
                        ans[0]=i;
                        ans[1]=j;
                    }
                    else
                    {
                        ans[0]=j;
                        ans[1]=i;
                    }
                }
            }
        }
        return ans;
        
    }
};
