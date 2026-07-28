class Solution {
public:
    bool isAnagram(string s, string t) {
        
        std::unordered_map<char,int>freq(26);
        for(char c : s)
        {
            freq[c]++;
        }
        for(char c : t)
        {
            freq[c]--;
        }
        for(auto &[ch,frequency]:freq)
        {
            if(frequency!=0)
            {
                return false;
            }
        }
        return true;

    }
};
