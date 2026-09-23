class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False
        hash_map1 = {

        }

        hash_map2 = {

        }

        for i in range(len(s)):
            if s[i] not in hash_map1:
                hash_map1[s[i]] = 1
            else:
                hash_map1[s[i]] += 1

            if t[i] not in hash_map2:
                hash_map2[t[i]] = 1
            else:
                hash_map2[t[i]] += 1


        for c in hash_map1.keys():
            if c not in hash_map2:
                return False

            if hash_map1[c] != hash_map2[c]:
                return False


        return  True
        
        

        