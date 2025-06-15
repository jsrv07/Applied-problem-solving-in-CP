class Solution(object):
    def can_make(self,bloomday,m,k,day):

        n_adj=0
        n_bouquets=0
        i=0
        while i <len(bloomday):
            if bloomday[i]<=day:
                n_adj+=1
            else:
                n_adj=0
            
            if n_adj==k:
                n_bouquets+=1
                n_adj=0
            
            i+=1
        
        if n_bouquets>=m:
            return 1
        else:
            return 0
            
            
    def minDays(self, bloomday, m, k):
        """
        :type bloomDay: List[int]
        :type m: int
        :type k: int
        :rtype: int
        """
        if m*k>len(bloomday):
            return -1

        low,high,mid=min(bloomday),max(bloomday),0
        while high>=low:

            mid=(low+high)//2

            if(self.can_make(bloomday,m,k,mid)):
                high=mid-1
            else:
                low=mid+1
            
        return low


        