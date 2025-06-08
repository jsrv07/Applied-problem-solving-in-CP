#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int start = 1, end = *max_element(piles.begin(), piles.end());
    int answer = end;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        long long hours = 0;

        for (int pile : piles) {
            hours += (pile + mid - 1) / mid;
        }

        if (hours <= h) {
            answer = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return answer;
}