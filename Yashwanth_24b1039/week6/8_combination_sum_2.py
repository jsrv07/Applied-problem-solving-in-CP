class Solution:
    def combinationSum2(self, candidates: list[int], target: int) -> list[list[int]]:
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        res=[]
        sum_curr=0
        candidates.sort()
        def generate_comb(curr,start):
            nonlocal sum_curr
            if sum_curr==target:
                res.append(list(curr))
                return 
            if sum_curr>target:
                return
            for i in range(start,len(candidates)):
                if i>start and candidates[i-1]==candidates[i]:
                    continue
                curr.append(candidates[i])
                sum_curr+=candidates[i]
                generate_comb(curr,i+1)
                sum_curr-=curr.pop()

        generate_comb([],0)
        return res