class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        map<int,int>freq;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
             freq[nums[i]]++;
        }
        int k=0;
        for(auto&[number,frequency]:freq)
        {   
            if(frequency>=1)
            {
                nums[k]=number;
                k++;
            }
            
        }
       
        return k;
        
    }
};