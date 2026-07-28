class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string ans="";
      int n=strs.size();
      if(n==1)
      {
         return strs[0];
      }
      int minlength= min(strs[0].length(),strs[1].length());
      for(int i=0;i<minlength;i++)
      {
            if(strs[0][i]==strs[1][i])
            {
                ans.push_back(strs[0][i]);
            }
            else
            {
                break;  
            }
      }
      for(int i=2;i<n;i++)
      {
          int j=0;
          while(j<min(ans.length(),strs[i].length()) && ans[j]==strs[i][j])
          {
               j++;

          }
          while(ans.size()>j)
          {
              ans.pop_back();
          }
          
      }
       return ans;
        
    }
};