class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        k=k%n
        nums.reverse()
        nums[0:k]=nums[0:k][::-1]
        nums[k:len(nums)]=nums[k:len(nums)][::-1]

        