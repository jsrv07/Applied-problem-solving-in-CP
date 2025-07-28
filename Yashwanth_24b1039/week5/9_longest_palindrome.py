class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """

        res=""
        max_cnt=0

        for i in range(0,2*(len(s))-1):

            cnt=0
            j=i//2

            if i%2==0:
                cnt+=1
                j-=1

            while True:

                if j<0 or (i-j)>len(s)-1:
                    break

                if s[j]==s[i-j]:
                    cnt+=2
                    j-=1
                else:
                    break    

            if cnt>max_cnt:

                max_cnt=cnt
                res=s[j+1:i-j]
            
        return res