class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mapping = {}
        ans = []
        for i in range(len(nums)):
            if nums[i] not in mapping:
                mapping[nums[i]] = [i]
            else:
                mapping[nums[i]].append(i)


        for num in nums:
            t = target - num
            n1 = mapping[num].pop(0)
            if t in mapping and mapping[t]:
                n2 = mapping[t].pop(0)
                return  [n1, n2]
                

        return []
            
            
        