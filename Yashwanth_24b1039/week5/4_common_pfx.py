class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """

        i=0
        while(True):

            rep=True

            if i==len(strs[0]):
                break
                
            x=strs[0][i]

            for j in range(1,len(strs)):

                if i==len(strs[j]):
                    rep=False
                    break
                if strs[j][i]!=x:
                    rep=False
                    break

            if not rep:
                break
            
            i+=1
        
        return(strs[0][0:i])