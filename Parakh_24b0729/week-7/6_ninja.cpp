int ninjaTraining(int N, vector<vector<int>>& points) {
    vector<int> prev(4, 0);

    prev[0] = max(points[0][1], points[0][2]);
    prev[1] = max(points[0][0], points[0][2]);
    prev[2] = max(points[0][0], points[0][1]);
    prev[3] = max({points[0][0], points[0][1], points[0][2]});

    for (int day = 1; day < N; ++day) {
        vector<int> curr(4, 0);
        for (int last = 0; last < 4; ++last) {
            int maxi = 0;
            for (int task = 0; task < 3; ++task) {
                if (task != last) {
                    int point = points[day][task] + prev[task];
                    maxi = max(maxi, point);
                }
            }
            curr[last] = maxi;
        }
        prev = curr;
    }

    return prev[3];  
}