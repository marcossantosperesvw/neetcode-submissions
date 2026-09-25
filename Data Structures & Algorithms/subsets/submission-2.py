class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        self.ans = set()


        
        def bt(i, conjunto):

            if i  == len(nums):
                if tuple(conjunto) not in self.ans:
                    self.ans.add(tuple(conjunto))
                    
                return


            conjunto.append(nums[i]);
            bt(i + 1, conjunto)
            conjunto.pop(-1)
            bt(i + 1, conjunto)


        bt(0, [])


        return [list(x) for x in self.ans]
