class Solution(object):
    def is_possible(self,nums,threshold,divisor):

        sum=0
        for x in nums:
            sum+=(x+divisor-1)//divisor
        
        if (sum>threshold):
            return True 
        return False
        
    def smallestDivisor(self, nums, threshold):
        """
        :type nums: List[int]
        :type threshold: int
        :rtype: int
        """
        sum=0

        for x in nums:
            sum+=x
        
        low=1
        high=max(nums)
        mid=0

        while(high>=low):

            mid=(high+low)//2
            if(not self.is_possible(nums,threshold,mid)):
                high=mid-1
            else:
                low=mid+1
            
        return low