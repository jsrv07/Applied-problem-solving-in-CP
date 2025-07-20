class Solution:
    def fib(self, n: int) -> int:
        
        if n<=1:
            return n
        fibanocci=[0,1]+[0]*(n-1)
        for i in range(2,n+1):
            fibanocci[i]=fibanocci[i-1]+fibanocci[i-2]
        
        return fibanocci[-1]