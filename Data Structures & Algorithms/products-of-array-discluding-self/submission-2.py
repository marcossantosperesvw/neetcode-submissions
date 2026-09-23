class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        pref = [0 for _ in range(len(nums))]
        suf = [0 for _ in range(len(nums))]
        p = 1
        for i in range(len(nums)):
            p *= nums[i]
            pref[i] = p

        p = 1
        for i in range(len(nums) - 1, -1, -1):
            p *= nums[i]
            suf[i] = p

        ans = [0 for _ in range(len(nums))]
        ans[0] = suf[1]
        ans[len(nums) - 1] = pref[len(nums) - 2]
        for i in range(1,len(nums) -1 ):
            ans[i] = pref[i - 1] *  suf[i + 1]

        return ans



        