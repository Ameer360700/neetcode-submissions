class Solution {

private:
     int digitsquaredsum(int n)
     {   
         int squaredsum=0;
         while(n>0)
         {  
             int d=n%10;
             squaredsum+=d*d;
             n=n/10;
         }
         return squaredsum;
     }
public:
    bool isHappy(int n) {
        unordered_set<int>seen;
        while(n>0)
        {
            n=digitsquaredsum(n);
            if(n==1)
            {
                return true;
            }
            if(seen.count(n))
            {
                return false;
            }
            seen.insert(n);
            
        }
    }
};
