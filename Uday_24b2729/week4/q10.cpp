class Solution {
public:
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size() ;
        int n2 = nums2.size() ;
        vector<int> merged(n1+n2);
        
        int i = 0, j = 0, k = 0;
        while (i < n1 && j < n2) {
            if (nums1[i] <= nums2[j])
                merged[k++] = nums1[i++];
            else
                merged[k++] = nums2[j++];
            }
            // Copy remaining elements of arr1
            while (i < n1)
                merged[k++] = nums1[i++];
            // Copy remaining elements of arr2
            while (j < n2)
                merged[k++] = nums2[j++];

             int n = n1+ n2;
            if (n == 0) {
                return 0.0; // or throw an exception, depending on your needs
            }
            if (n % 2 == 1) {
                // Odd number of elements: return the middle element
                return merged[n / 2];
            } else {
                // Even number of elements: return the average of the two middle elements
                return (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
            }
    }
};