#include <bits/stdc++.h>
using namespace std;


bool isPossible(vector<int>& arr, int k, int maxPages) {
    int students = 1, pages = 0;
    for (int pagesInBook : arr) {
        if (pages + pagesInBook > maxPages) {
            students++;
            pages = pagesInBook;
        } else {
            pages += pagesInBook;
        }
    }
    return students <= k;
}

int allocateBooks(vector<int>& arr, int k) {
    int n = arr.size();
    if (n < k) return -1; 

    int start = *max_element(arr.begin(), arr.end());
    int end = accumulate(arr.begin(), arr.end(), 0);
    int result = end;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, k, mid)) {
            result = mid;
            end = mid - 1; 
        } else {
            start = mid + 1; 
        }
    }
    return result;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout << allocateBooks(arr, k) << endl;  
}