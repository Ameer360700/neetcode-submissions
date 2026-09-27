class Solution {
private:
     int solve(int i, vector<int>&cost,vector<int>&memo)
     {
          int n=cost.size();
          if(i>=n)
          {
            return 0;
          }
          if(memo[i]!=-1)
          {
            return memo[i];
          }
          int onestep=cost[i]+solve(i+1,cost,memo);
          int twostep=cost[i]+solve(i+2,cost,memo);
          return memo[i]=min(onestep,twostep);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        vector<int>memo(n+1,-1);
        return min(solve(0,cost,memo),solve(1,cost,memo));
    }
};
