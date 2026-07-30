class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<=end)
        {
               int middle=start+(end-start)/2;
                
               if(target==nums[middle])
               {
                   return middle;
               }
               else if(target<nums[middle])
               {
                   end=middle-1;
               }
               else if(target>nums[middle])
               {
                   start=middle+1;
               }
               else 
               {
                  break;
               }
               
        }
        return -1;
        
    }
};
