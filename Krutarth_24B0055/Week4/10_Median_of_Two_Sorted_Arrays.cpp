class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
            if(nums1.size() > nums2.size()){
                return findMedianSortedArrays(nums2, nums1);
            }

            int m = nums1.size();
            int n = nums2.size();
            int total_left = (m+n+1) / 2;

            int l = 0, r = m;

            int MIN_INT = INT_MIN;
            int MAX_INT = INT_MAX;

            int A_left = 0, A_right = 0, B_left = 0, B_right = 0;
            int i = 0, j = 0;

            while(l <= r){
                i = (l + r) / 2;
                j = total_left - i;

                A_left = (i == 0) ? MIN_INT : nums1[i - 1];
                A_right = (i == m) ? MAX_INT : nums1[i];
                B_left = (j == 0) ? MIN_INT : nums2[j - 1];
                B_right = (j == n) ? MAX_INT : nums2[j];

                if(A_left<=B_right && B_left<=A_right){
                    if((m+n)%2 == 0){
                        return (max(A_left, B_left) + min(A_right, B_right))/2.0;
                    }
                    else{
                        return max(A_left, B_left);
                    }
                }
                else if(A_left > B_right){
                    r = i - 1;
                }
                else{
                    l = i + 1;
                }
            }

            return 0.0;
        }
};