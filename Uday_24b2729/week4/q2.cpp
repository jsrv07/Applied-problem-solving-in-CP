#include <bits/stdc++.h>
using namespace std;

int smallestDivisor(vector<int> &nums, int threshold)
{
    int n = nums.size();
    // finding max element
    long maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > maxi)
            maxi = nums[i];
    }
    // Binary Search
    long low = 1, high = maxi;
    while (low <= high)
    {
        long mid = low + (high - low) / 2;
        long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (nums[i] + mid - 1) / mid;
        }
        if (sum <= threshold)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}