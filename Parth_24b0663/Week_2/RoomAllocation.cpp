#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<tuple<int, int, int>> customers(n);
     for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        customers[i] = {a, b, i};
    }
    
    sort(customers.begin(), customers.end());
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    int room_count = 0;
    vector<int> result(n);
    
    for (auto [a, b, idx] : customers) {
        if (!pq.empty() && pq.top().first < a) {
            auto [dep, room_num] = pq.top(); pq.pop();
            result[idx] = room_num;
            pq.push({b, room_num});
        } else {
            ++room_count;
            result[idx] = room_count;
            pq.push({b, room_count});
        }
    }
    cout << room_count << "\n";
    for (int i = 0; i < n; ++i)
        cout << result[i] << " ";
    cout << "\n";

    return 0;
}