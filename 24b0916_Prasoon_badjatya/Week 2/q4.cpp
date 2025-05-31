#include <bits/stdc++.h>
using namespace std;
 
struct logs{
    int a, d, idx;
    bool operator<(const logs& other) const {
        return a < other.a;  // Sort by arrival time
    }
};
 
int main() {
    int n; 
    cin >> n;
    vector<logs> customers(n);
    for(int i(0); i<n; i++) {
        int x, y;
        cin >> x >> y;
        customers[i] = {x, y, i};
    }
    sort(customers.begin(), customers.end());
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    int room_count = 0;
    vector<int> room_assignment(n); // room assigned to each customer
    for(auto [start, end, idx] : customers) {
        if(!pq.empty() && pq.top().first < start) {
            auto [free_day, room_no] = pq.top();
            pq.pop();
            pq.push({end, room_no});
            room_assignment[idx] = room_no;
        }else {
            ++room_count;
            pq.push({end, room_count});
            room_assignment[idx] = room_count;
        }
    }
    cout << room_count << endl;
    for (int room : room_assignment) cout << room << ' ';
    cout << endl;
}