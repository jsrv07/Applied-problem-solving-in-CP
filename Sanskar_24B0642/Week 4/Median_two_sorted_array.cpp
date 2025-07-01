#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
    if (A.size() > B.size()) return findMedianSortedArrays(B, A);

    int n = A.size(), m = B.size();
    int low = 0, high = n;

    while (low <= high) {
        int i = (low + high) / 2;
        int j = (n + m + 1) / 2 - i;

        int A_left = (i == 0) ? INT_MIN : A[i - 1];
        int A_right = (i == n) ? INT_MAX : A[i];
        int B_left = (j == 0) ? INT_MIN : B[j - 1];
        int B_right = (j == m) ? INT_MAX : B[j];

        if (A_left <= B_right && B_left <= A_right) {
            if ((n + m) % 2 == 0) {
                return (max(A_left, B_left) + min(A_right, B_right)) / 2.0;
            } else {
                return max(A_left, B_left);
            }
        } else if (A_left > B_right) {
            high = i - 1;
        } else {
            low = i + 1;
        }
    }

    return 0.0; // Should never be reached
}
