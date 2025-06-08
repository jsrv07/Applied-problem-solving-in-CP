#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countOcc(vector<int> &arr, int target) {
    int l = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    int u = upper_bound(arr.begin(), arr.end(), target) - arr.begin();

    return (u-l);
}

int main() {
    vector<int> arr = {1,2,2,2,3,5,7};
    int target = 10;
    cout << countOcc(arr, target);

    return 0;
}