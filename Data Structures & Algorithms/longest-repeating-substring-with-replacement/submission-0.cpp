class Solution {
public:
    
int characterReplacement(string s, int k) {
        int l = 0, r = 0;
        int maxlength = 0;
        int maxfrequency = 0;
        vector<int> freq(26, 0);
        while (r < s.size())
         {
            freq[s[r]-'A']++;
            maxfrequency = max(maxfrequency, freq[s[r]-'A']);
            while ((r-l+1) - maxfrequency > k)
            {
                  freq[s[l]-'A']--;
                  l++;
                  maxfrequency = 0;
                  for (int i = 0; i < 26; i++)
                       maxfrequency = max(maxfrequency, freq[i]);
            }
            maxlength = max(maxlength, r-l+1);
            r++;
          }
          return maxlength;
}
};
