class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>>ans;
        vector<vector<string>>finalans;
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
            vector<int>tempfreq(26);
            for(char c : strs[i])
            {
                tempfreq[c-'a']++;
            }
            string tempfrequency;
            for(int i=0;i<26;i++)
            {
                tempfrequency.push_back(tempfreq[i]);
            }
            ans[tempfrequency].push_back(strs[i]);
        }
        for(auto &[frequency,newstrs]:ans)
        {
             finalans.push_back(newstrs);
        }
        return finalans;

        
    }
};
