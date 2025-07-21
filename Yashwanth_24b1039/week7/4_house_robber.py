class Solution:
    def rob(self, nums: list[int]) -> int:
        
        sm=[0]*len(nums)
        if len(nums)<=2:
            return max(nums)
        sm[0]=nums[0]
        sm[1]=nums[1]
        sm[2]=nums[0]+nums[2]
        for i in range(3,len(nums)):
            sm[i]=max(sm[i-2],sm[i-3])+nums[i]
        
        return (max(sm[-1],sm[-2]))