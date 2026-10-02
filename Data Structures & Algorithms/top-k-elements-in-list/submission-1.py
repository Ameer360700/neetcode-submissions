class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        freq={}
        minheap=[]
        res=[]
        for num in nums:
            freq[num]=freq.get(num,0)+1
        for number,frequency in freq.items():
            heapq.heappush(minheap,(frequency,number))
            if len(minheap)>k :
                heapq.heappop(minheap)
        while minheap:
            node=minheap[0]
            res.append(node[1])
            heapq.heappop(minheap)
        return res