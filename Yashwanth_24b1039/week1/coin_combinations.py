n, x=map(int,input().split())
nums=list(map(int,input().split()))

nums.sort()
mod=10**9+7

dp=[0]*(x+1)
dp[0]=1

for i in range(1,x+1):
    for c in nums:
        if c-i>0:
            break
        dp[i]=(dp[i-c]+dp[i])%mod

print(dp[x])
