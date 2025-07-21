from collections import defaultdict

class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """

        isomap1=defaultdict(str)
        isomap2=defaultdict(str)

        isomorph=True

        if len(s)!=len(t):
            return False

        for i in range(len(t)):

            if isomap1[s[i]]=="":
                isomap1[s[i]]=t[i]
            else:
                if isomap1[s[i]]!=t[i]:
                    return False
            if isomap2[t[i]]=="":
                isomap2[t[i]]=s[i]
            else:
                if isomap2[t[i]]!=s[i]:
                    return False
        return True
