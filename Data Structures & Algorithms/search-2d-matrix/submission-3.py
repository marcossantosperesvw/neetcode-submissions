class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        rows = len(matrix)
        columns = len(matrix[0])

        # vamos comecar a procurar na linha do meio

        top, bot = 0, rows - 1
        while top < bot:
            i = (top + bot) // 2

            if target > matrix[i][-1]:
                top = i + 1
            elif target < matrix[i][0]:
                bot = i - 1

            else:
                top = i
                bot = i

        # top == bot ->busca binaria
        l = 0
        r = columns - 1

        while(l <= r):
            middle = (l + r) // 2
            if target > matrix[bot][middle]:
                l = middle + 1

            elif target < matrix[bot][middle]:
                r = middle - 1

            else:
                return True


        return False
        

        
        
