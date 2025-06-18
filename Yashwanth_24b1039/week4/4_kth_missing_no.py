class Solution(object):
    def findKthPositive(self, arr, k):
        """
        :type arr: List[int]
        :type k: int
        :rtype: int
        """
        curr=0
        cnt=0
        i=0

        while (cnt<k and i<len(arr)) :

            curr+=1

            if(curr==arr[i]):
                i+=1
            else:
                cnt+=1

        return(curr+k-cnt)