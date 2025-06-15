// C++ program to find the minimum time for
// painter's partation problem using recursion.


// same as gfg soln 

#include <bits/stdc++.h>
using namespace std;

int minimizeTime(int curr, int n, vector<int> &arr, int k) {
  
    // If all boards are painted, return 0
    if (curr >= n)
        return 0;

    // If no painters are left
    if (k == 0)
        return INT_MAX;

   // Current workload for this painter
    int currSum = 0;    
  
   // Result to store the minimum possible time
    int res = INT_MAX;  

    // Divide the boards among painters starting from curr
    for (int i = curr; i < n; i++) {
        currSum += arr[i];

     // Find the maximum time if we assign arr[curr..i] to
     // this painter
        int remTime = minimizeTime(i + 1, n, arr, k - 1);
        int remaining = max(currSum, remTime);

        // Update the result
        res = min(res, remaining);
    }

    return res;
}

 
int minTime(vector<int> &arr, int k) {
    int n = arr.size();
    return minimizeTime(0, n, arr, k);
}

int main() {
    vector<int> arr = {10, 10, 10, 10};
    int k = 2;
    int res = minTime(arr, k);
    cout << res << endl;

    return 0;
}