from collections import deque
class Solution:
    def minOperations(self, logs: List[str]) -> int:
        q = deque()

        for i in logs:
            if len(q) > 0 and i == "../":
                q.popleft()
            elif (i != "./" and i != "../"):
                q.append(i)

        return len(q)
        
