class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    { 
        int i=0;
        int j=0;
        int n;
        int n1=word1.size();
        int n2=word2.size();
        string ans="";
        if(n1<n2)
        {
            n=n1;
        }
        else
        {
            n=n2;
        }
        for(int k=0;k<n+n;k++)
        {
             if(k%2==0)
             {
                ans.push_back(word1[i++]);
             }
             else
             {
                ans.push_back(word2[j++]);
             }
        }
        while(i<n1)
        {
            ans.push_back(word1[i]);
            ++i;
        }
        while(j<n2)
        {
            ans.push_back(word2[j]);
            ++j;
        }
        return ans;
    }
};