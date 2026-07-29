class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int k=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
                k=k+1;
            }
        }
        int i=0;
        int j=n-1;
        while(i<k && i<j)
        {
              if(nums[i]==val && nums[j]!=val)
              {
                  nums[i]=nums[j];
                  i++;
                  j--;
              }
              if(nums[i]!=val)
              {
                      i++;
              }
              if(nums[j]==val)
              {
                   j--;
              }
        }
        return k;
        
    }
};