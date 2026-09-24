class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        op_set = {"+", "-", "*", "/"}
        for t in tokens:
            if t not in op_set:
                stack.append(int(t))
            else:
                a = stack.pop()
                b = stack.pop()
                val  = 0
                match t:
                    case "*":
                        val = b * a
                    case "-":
                        val = b - a
                    case "/":
                        val = b / a
                    case "+":
                        val = b + a

                stack.append(int(val))

        return stack[-1] if stack else []
        