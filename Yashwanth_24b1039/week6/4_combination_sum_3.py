from itertools import combinations

class Solution(object):
    def combinationSum3(self, k, n):
        """
        :type k: int
        :type n: int
        :rtype: List[List[int]]
        """
        
        res=[]

        if k>9 or k<=0:
            return res
        
        if n<(k)*(k+1)//2 or n>(k)*(19-k)//2:
            return res

        # for comb in combinations(range(1,10),k):
        #     if sum(comb)==n:
        #         res.append(list(comb))
        def generate_comb(curr,start,mx,k):

            if len(curr)==k:
                if sum(curr)==n:
                    res.append(curr)
                return 
            for i in range(start,mx+1):
                generate_comb(curr+[i],i+1,mx,k)
        generate_comb([],1,9,k)
        return res
        