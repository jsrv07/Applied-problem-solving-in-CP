from collections import defaultdict

class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """

        freq=defaultdict(int)

        for x in s:
            freq[x]+=1

        sorted_freq=sorted(freq.items(),key=lambda x : x[1])
        res=""
        for i in reversed(sorted_freq):
                res+=i[0]*i[1]
        
        return res