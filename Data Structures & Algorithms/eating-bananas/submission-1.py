class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        
        def findmax(piles: List[int]) -> int:

            maximum=0;
            for i in range(len(piles)):

                if piles[i]>piles[maximum]:
                    maximum=i
                    
            return piles[maximum]
        
        def returnhours(piles: List[int], k: int) -> int:

            totalhrs=0
            for i in range(len(piles)):

                totalhrs=totalhrs+math.ceil(piles[i]/k)

            return totalhrs
        
        low=1
        high=findmax(piles)
        while low<=high:

            mid=(low+high)//2
            hourstaken=returnhours(piles,mid)
            if hourstaken<=h:
                high=mid-1
            else:
                low=mid+1
        return low 


        
