#include <bits/stdc++.h>
using namespace std;
struct Customer {
    long long arrive, depart;
    int idx;
};
int main() {
    int n;
    cin >> n;
    vector<Customer> customers(n);
    for (int i = 0; i < n; i++) {
        cin >> customers[i].arrive >> customers[i].depart;
        customers[i].idx = i;
    }
    sort(customers.begin(), customers.end(), [](const Customer &a, const Customer &b) {
        return a.arrive < b.arrive;
    });
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> rooms;
    vector<int> assigned_room(n);
    int next_room = 1;
    for (const auto &cust : customers) {
        if (!rooms.empty() && rooms.top().first < cust.arrive) {
            int room_no = rooms.top().second;
            rooms.pop();
            assigned_room[cust.idx] = room_no;
            rooms.push({cust.depart, room_no});
        } else {
            assigned_room[cust.idx] = next_room;
            rooms.push({cust.depart, next_room});
            next_room++;
        }
    }

    cout << next_room - 1 << endl;
    for (int room : assigned_room) {
        cout << room << " ";
    }
    cout << endl;

    return 0;
}
