class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        mapping = {

        }

        pref = [0] * (len(nums) + 1)

        for i in range(0, len(nums)):
            pref[i + 1] = nums[i] + pref[i]


        for i in range(len(pref)):
            if (pref[i] % k) not in mapping:
                mapping[pref[i] % k] = 1
            else:
                mapping[pref[i] % k] += 1
        count = 0
        for val in mapping.values():
            count += int((val * (val - 1))/2)

        return count

