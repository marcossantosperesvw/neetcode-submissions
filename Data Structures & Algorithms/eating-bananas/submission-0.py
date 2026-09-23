from math import ceil

class Solution:
    def soma_horas(self, piles, k):
        ans = 0
        for i in piles:
            ans += ceil(i/k)

        return ans
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        r = max(piles)
        l = 1
        min_val = float('inf')
        while(l <= r):
            middle = (l + r) // 2
            hours_count = self.soma_horas(piles, middle)
            if (hours_count > h):
                l = middle + 1
            
            elif (hours_count <= h):
                r = middle - 1 
                min_val = min(min_val, middle)
    
        

        return min_val