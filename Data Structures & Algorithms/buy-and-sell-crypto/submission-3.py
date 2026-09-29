class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        i = 0
        profit = -float('inf')
        while i < len(prices):

            j = i        
            while j < len(prices):
                if (prices[j] - prices[i]) > profit:
                    profit = prices[j] - prices[i]
                j += 1

            i += 1

        return profit

        