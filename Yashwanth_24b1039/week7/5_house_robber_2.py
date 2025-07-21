class Solution:
    def rob(self, nums: list[int]) -> int:
        
        n=len(nums)
        sm=[0]*n
        if n<=3:
            return max(nums)
        sm[0]=nums[0]
        sm[1]=nums[1]
        sm[2]=nums[2]+nums[0]
        for i in range(3,n-1):
            sm[i]=max(sm[i-2],sm[i-3])+nums[i]
        
        res=max(sm[-2],sm[-3])

        sm=[0]*n
        sm[1]=nums[1]
        sm[2]=nums[2]
        sm[3]=nums[3]+nums[1]
        for i in range(4,n):
            sm[i]=max(sm[i-2],sm[i-3])+nums[i]
        
        return max(res,sm[-1])