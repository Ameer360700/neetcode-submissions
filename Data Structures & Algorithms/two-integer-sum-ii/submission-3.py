class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        
        hashmap={}
        n=len(numbers)
        for i in range(len(numbers)):

            number1=numbers[i]
            number2=target-number1
            if number2 in hashmap:

                return [hashmap[number2]+1,i+1]

            hashmap[number1]=i
            
        return [-1.-1]
        