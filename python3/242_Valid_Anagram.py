class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        dic = {}
        for a in s:
            dic[a] = dic[a] + 1 if a in dic else 1
        for d in t:
            if d in dic:
                dic[d] -= 1
                if dic[d] == 0:
                    del dic[d]
            else:
                return False
        return len(dic) == 0
