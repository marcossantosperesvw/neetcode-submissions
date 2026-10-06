class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        out = [0 for _ in range(n)]

        for i in range(n):
            out[(i+k)%n] = nums[i]

        for i in range(len(out)):
            nums[i] = out[i]

            