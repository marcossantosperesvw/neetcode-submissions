class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        p = 1
        for num in nums:
            p *= num
        ans = [0 for _ in range(len(nums))]
        for i in range(len(nums)):
            if nums[i] != 0:
                ans[i] = p//nums[i]

            else:
                p2 = 1
                for j in range(len(nums)):
                    if j != i:
                      p2 *= nums[j]
                ans[i] = p2  
        return ans
            
        