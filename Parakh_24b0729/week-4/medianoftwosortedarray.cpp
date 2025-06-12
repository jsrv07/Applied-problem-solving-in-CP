
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n3 = n1 + n2;
        vector<int> arr(n3);
        for (int i = 0; i < n1; i++) {
            arr[i] = nums1[i];
        }
        for (int i = 0; i < n2; i++) {
            arr[n1 + i] = nums2[i];
        }
        sort(arr.begin(),arr.end());
        if (n3 % 2 == 0) {
            return (arr[n3 / 2 - 1] + arr[n3 / 2]) / 2.0;
        } else {
            return arr[n3 / 2];
        }
    }
};