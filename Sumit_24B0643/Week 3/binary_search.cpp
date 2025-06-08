#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int x) {
    int res = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            res = mid;
            high = mid - 1;
        }

        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return res;
}

int main() {
    int arr[] = {1,1,1,2,2,3,3,3,3,3,3,4,4,4,5,5,5};
    int x = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1) {
        cout << "Element is not present in array";
    }
    else {
        cout << "Element is present at index " << result;
    }
    return 0;
}