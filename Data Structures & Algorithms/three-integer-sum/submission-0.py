class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        
        s=set()
        for i in range(len(nums)):

            hashset=set()
            for j in range(i+1,len(nums)):

                third=-(nums[i]+nums[j])
                if third in hashset:

                   s.add(tuple(sorted([nums[i], nums[j], third])))
                
                hashset.add(nums[j])

        return [list(t) for t in s]
