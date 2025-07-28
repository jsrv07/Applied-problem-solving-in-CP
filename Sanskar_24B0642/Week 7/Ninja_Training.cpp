#include <iostream>
#include <vector>
using namespace std;

int getMaxMeritPoints(int n, vector<vector<int>>& points) {
    // dp[3] stores max points till previous day when last task was 0, 1, or 2
    vector<int> prev(3);
    prev[0] = max(points[0][1], points[0][2]);
    prev[1] = max(points[0][0], points[0][2]);
    prev[2] = max(points[0][0], points[0][1]);

    for (int day = 1; day < n; ++day) {
        vector<int> curr(3);
        for (int task = 0; task < 3; ++task) {
            curr[task] = points[day][task] + max(prev[(task + 1) % 3], prev[(task + 2) % 3]);
        }
        prev = curr;
    }

    return max(max(prev[0], prev[1]), prev[2]);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> points(n, vector<int>(3));
        for (int i = 0; i < n; ++i) {
            cin >> points[i][0] >> points[i][1] >> points[i][2];
        }

        cout << getMaxMeritPoints(n, points) << endl;
    }
    return 0;
}
