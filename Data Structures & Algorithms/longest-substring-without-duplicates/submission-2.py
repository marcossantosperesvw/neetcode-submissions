class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if s == "":
            return 0
        i = 0
        j = 0
        tam_max = -1
        char_set = set()
        while (j < len(s)):

            if s[j] not in char_set:
                char_set.add(s[j])
                curr = j - i + 1
                tam_max = max(tam_max, curr)

            else:
                while (s[i] != s[j]):
                    if s[i] in char_set:
                        char_set.remove(s[i])
                    i += 1
                i += 1
            

            j += 1
        
        return tam_max

                
