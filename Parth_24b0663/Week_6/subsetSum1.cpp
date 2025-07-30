class Solution {
  public:
    bool isSubsetSum(vector<int>& arr,int n=arr.size(), int sum) {
    if (sum == 0) return true;
    if (n == 0) return false;

    // If last element is greater than sum, ignore it
    if (arr[n - 1] > sum)
        return subsetSumRec(arr, n - 1, sum);

    // Else check if sum can be obtained by including or excluding the last element
    return subsetSumRec(arr, n - 1, sum) || subsetSumRec(arr, n - 1, sum - arr[n - 1]);
}



    
};