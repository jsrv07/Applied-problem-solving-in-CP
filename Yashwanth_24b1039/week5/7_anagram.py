from collections import defaultdict

class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        
        freq_s=defaultdict(int)
        freq_t=defaultdict(int)

        if len(s)!=len(t):
            return False

        for i in range(len(s)):
            freq_s[s[i]]+=1
            freq_t[t[i]]+=1
        for i in freq_s:
            if freq_s[i]!=freq_t[i]:
                return False

        return True