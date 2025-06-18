class Solution(object):
    def is_possible(self,weights,days,limit):

        n_days=1
        sm=0
        for x in weights:
            if sm+x>limit:
                n_days+=1
                sm=0
            sm+=x
        
        return (n_days<=days)
            
    def shipWithinDays(self, weights, days):
        """
        :type weights: List[int]
        :type days: int
        :rtype: int
        """

        low,high=max(weights),sum(weights)

        while(high>=low):

            mid=(low+high)//2

            if self.is_possible(weights,days,mid):
                high=mid-1
            else:
                low=mid+1
        
        return low