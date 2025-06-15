class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int> merged;
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]) merged.push_back(nums1[i++]);
            else merged.push_back(nums2[j++]);
        }
        while(i<m) merged.push_back(nums1[i++]);
        while(j<n) merged.push_back(nums2[j++]);

        if((m+n)%2==0) return (double)(merged[(double)(m+n)/2]+merged[(double)(m+n)/2 -1])/2;
        else return merged[(double)(m+n)/2];
    }
};