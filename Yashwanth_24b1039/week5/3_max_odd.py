class Solution(object):
    def largestOddNumber(self, num):
        """
        :type num: str
        :rtype: str
        """

        max_odd=""

        for i in reversed(range(len(num))):
            if int(num[i])%2==1:
                max_odd=num[0:i+1]
                break

        return (max_odd if max_odd!=0 else "")