#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    int pivot_rbs(vector<int> &arr){
    int start = 0;
    int end = arr.size()-1;

    while(start <= end){

        int mid = start + (end - start )/2;

        if(mid < end && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid > start && arr[mid]  < arr[mid-1]){
            return mid-1;
        }

        if(arr[start]  >= arr[mid]){
            end  = mid -1; // if the left side will be smaller then the right side  index value  will be larger
        }
        else{
            start = mid +1; // if the left side will be larger than the right side  index value will be larger
        }

    }
    return -1;
}
    int findMin(vector<int>& nums) {
        int idx = pivot_rbs(nums);

        if(nums.size() -1 == 0){
            return nums[0];
        }
        return nums[idx+1] ;
    }
};