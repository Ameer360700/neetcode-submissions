class Solution {
private:
     
     int solve(int i, int n,vector<int>& memo)
     {
          if(i>n)
          {
            return 0;  //overshooting the top of stairs
          }
          if(i==n)
          {
            return 1;  //at a stair
          }
          if(memo[i]!=-1)
          {
            return memo[i];
          }
          return memo[i]=solve(i+1,n,memo)+solve(i+2,n,memo);
     }
public:
    int climbStairs(int n) {
        
         vector<int>memo(n+1,-1);// initialize we add n+1 because index default from 0 to n-1
         return solve(0,n,memo);
    }
};
