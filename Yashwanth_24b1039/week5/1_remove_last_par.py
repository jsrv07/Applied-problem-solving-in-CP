class Solution(object):
    def removeOuterParentheses(self, s):
        """
        :type s: str
        :rtype: str
        """

        res=""
        cnt=1

        for i in range(1,len(s)):
            
            
            if cnt==0:
                cnt+=(1 if s[i]=='(' else -1)
                continue

            cnt+=(1 if s[i]=='(' else -1)

            if cnt!=0:
                res+=s[i] 
            
        return(res)