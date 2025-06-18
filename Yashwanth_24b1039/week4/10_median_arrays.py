class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """

        if(len(nums1)>len(nums2)):
            nums1,nums2=nums2,nums1
        
        m=len(nums1)
        n=len(nums2)
        low,high=0,len(nums1)
        while(low<=high):
            i=(low+high)//2
            j=(m+n+1)//2-i

            maxLeft1=float('-inf') if i==0 else nums1[i-1]
            minRight1=float('inf') if i==m else nums1[i]
            maxLeft2=float('-inf') if j==0 else nums2[j-1]
            minRight2=float('inf') if j==n else nums2[j]

            if maxLeft1<=minRight2 and maxLeft2<=minRight1:
                if(m+n)%2==0:
                    return (max(maxLeft1,maxLeft2)+min(minRight1,minRight2))/2.0
                else:
                    return max(maxLeft1,maxLeft2)
            elif maxLeft1>minRight2:
                high=i-1
            else:
                low=i+1








