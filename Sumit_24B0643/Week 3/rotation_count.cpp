#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> &arr) {
    int low = 0, high = arr.size() - 1;

    while (low < high) {
        if (arr[low] <= arr[high]) {      
            return low;
        }

        int mid = (low + high) / 2;

        if (arr[mid] > arr[high]) {
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }

    return low; 
}

int main() {
    vector<int> arr = {5, 6, 1, 2, 3, 4};
    cout << findMin(arr);
    return 0;
}