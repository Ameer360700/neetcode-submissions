class Solution {
public:
    int mySqrt(int x) 
    {
        int start=0;
        int end=x;
        int res=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(x<(long long)mid*mid)
            {
                end=mid-1;
            }
            else if(x>(long long )mid*mid)
            {
                start=mid+1;
                res=mid;
               
            }
            else
            {
                 return mid;
            }

        }
        return res;
        
    }
};