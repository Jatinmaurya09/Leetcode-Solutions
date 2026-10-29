class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        ans =len(nums)
        for i in range(len(nums)):
            ans=ans^i^nums[i]
        return ans