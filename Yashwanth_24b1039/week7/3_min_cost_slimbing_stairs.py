class Solution:
    def minCostClimbingStairs(self, cost: list[int]) -> int:

        min_cost=[0]*(len(cost)+1)
        min_cost[1]=cost[0]
        min_cost[2]=cost[1]
        for i in range(3,len(cost)+1):
            min_cost[i]=min(min_cost[i-1],min_cost[i-2])+cost[i-1]

        return min(min_cost[-2],min_cost[-1])

