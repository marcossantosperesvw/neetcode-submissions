class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums = sorted(nums)         
        h = {}
        ans = set() #dicionario evita que sejam criadas duplicadas
        for idx, num in enumerate(nums):
            if num not in h:
                h[num] = [1,idx]

            else:
                h[num][0] += 1


        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if i != j:

                    target = -(nums[i] + nums[j])
                    if target in h and i != h[target][1] and j != h[target][1]:
                        ans.add(tuple(sorted([nums[i], nums[j], target])))

                
        return  [list(tri) for tri in ans]