class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """

        words=s.split()
        return ' '.join(reversed(words))