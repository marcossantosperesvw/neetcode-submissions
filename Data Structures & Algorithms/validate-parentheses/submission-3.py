class Solution:
    def isValid(self, s: str) -> bool:
        mapping = {
            ")": "(",
            "}": "{",
            "]": "["
        }
        stack = []

        for c in s:
            if c not in mapping:
                stack.append(c)
            else:
                if not stack:
                    return False
                if stack and mapping[c] != stack.pop():
                    return False
                

        return True if not stack else False

        