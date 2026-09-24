class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       
       unordered_set<int>outgoingvertices;
       unordered_map<int,int>indegrees;
       for(int i=0;i<trust.size();i++)
       {
           outgoingvertices.insert(trust[i][0]);
           indegrees[trust[i][1]]++;
       }
       for(int i=1;i<=n;i++)
       {
           if(!outgoingvertices.count(i) && indegrees[i]==n-1)
           {
               return i;
           }
       }
       return -1;
        
    }
};