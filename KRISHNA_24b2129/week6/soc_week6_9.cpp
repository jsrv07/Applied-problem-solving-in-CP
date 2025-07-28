#include <iostream>
using namespace std;

void ways(int* arr, int n, int index, int sum, int& count, int target) {
    if (index == n) { 
        if (sum == target) count++;
        return;
    }
    ways(arr, n, index + 1, sum + arr[index], count, target);
    ways(arr, n, index + 1, sum, count, target);
}

int main() {
    int n, count = 0, target;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;

    ways(arr, n, 0, 0, count, target);

    if (count > 0) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}