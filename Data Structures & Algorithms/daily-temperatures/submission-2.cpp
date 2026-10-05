class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
         int n=temperatures.size();
         vector<int>res(n,0);
         stack<pair<int,int>>stk;
         for(int i=0;i<n;i++)
         {
             while(!stk.empty() && temperatures[i]>stk.top().first)
             {
                 auto [temp,j]=stk.top();
                 stk.pop();
                 res[j]=i-j;
             }
             stk.push({temperatures[i],i});
         }
         return res;
    }
};
