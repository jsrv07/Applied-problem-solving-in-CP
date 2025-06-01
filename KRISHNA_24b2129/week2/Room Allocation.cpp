#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct Customer {
    int arrival;
    int departure;
    int index;
};

bool compare(Customer a, Customer b) {
    return a.arrival < b.arrival;
}

int main() {
    int n;
    cin >> n;

    vector<Customer> customers(n);
    for (int i = 0; i < n; ++i) {
        cin >> customers[i].arrival >> customers[i].departure;
        customers[i].index = i;
    }

    sort(customers.begin(), customers.end(), compare);

    vector<int> room_endings; 
    vector<int> answer(n);

    for (int i = 0; i < n; ++i) {
        int assigned = -1;
        
        for (int j = 0; j < room_endings.size(); ++j) {
            if (room_endings[j] < customers[i].arrival) {
                assigned = j;
                break;
            }
        }

        if (assigned == -1) {
          
            room_endings.push_back(customers[i].departure);
            answer[customers[i].index] = room_endings.size(); 
        } else {
          
            room_endings[assigned] = customers[i].departure;
            answer[customers[i].index] = assigned + 1; 
        }
    }

    cout << room_endings.size() <<endl;
    for (int i = 0; i < n; ++i) {
        cout << answer[i] << " ";
    }
}