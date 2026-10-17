class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        
        k=len(s1)
        substr=Counter(s1)
        window=Counter(s2[:k])
        if window==substr:
            return True
        
        for r in range(k,len(s2)):

            window[s2[r]]+=1
            left=s2[r-k]
            window[left]-=1
            if window[left]==0:
                del window[left]
            if window==substr:
                return True
        
        return False
                    


