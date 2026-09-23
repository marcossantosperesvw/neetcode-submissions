class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        num_map = {}
        ans = []
        for i in range(len(nums)):
            num_map[nums[i]] = 1 + num_map.get(nums[i], 0)

        lista = list(num_map.items())
        lista = sorted(lista, key=lambda t: t[1], reverse=True)

        j = 0
        for t in lista:
            if k == j:
                return ans
            ans.append(t[0])
            j += 1
        return ans
        