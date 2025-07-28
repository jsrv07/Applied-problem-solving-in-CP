class Solution(object):

    def valid(self,lst):

        res=[0]*(2*len(lst)+1)
        
        for x in lst:
            res[x]==1
        
        sum=0
        for y in range(1,len(res)):
            sum+=2*res[y]-1
            if sum<0:
                return False
        
        return True

        
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """

        res=[[] for _ in range(n+1)]
        res[0].append("")
        for i in range(1,n+1):

            for j in range(i):
                for x in res[j]:
                    for y in res[i-1-j]:
                        res[i].append("("+x+")"+y)
            
        return res[n]

n=int(input())
solve=Solution()
print(solve.generateParenthesis(n))