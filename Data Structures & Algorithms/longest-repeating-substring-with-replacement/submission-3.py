class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        
        l=0
        r=0
        maxfrequency=0
        maxlength=0
        freq=[0]*26
        while r<len(s):

            freq[ord(s[r])-ord('A')]+=1
            maxfrequency=max(maxfrequency,freq[ord(s[r])-ord('A')]);

            while (r-l+1)-maxfrequency > k:

                freq[ord(s[l])-ord('A')]-=1
                maxfrequency=0;
                maxfrequency=max(freq);
                l+=1
            
            maxlength=max(maxlength,(r-l+1));
            r+=1
        
        return maxlength



