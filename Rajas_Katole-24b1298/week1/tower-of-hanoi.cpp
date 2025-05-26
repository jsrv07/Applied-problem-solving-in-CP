#include <iostream>
#include <vector>
using namespace std;

void towerOfHanoi(int n, int source, int auxiliary, int target, vector<pair<int, int>>& moves) {
    if (n == 1) {
        moves.push_back({source, target});
        return;
    }
    towerOfHanoi(n - 1, source, target, auxiliary, moves);
    moves.push_back({source, target});
    towerOfHanoi(n - 1, auxiliary, source, target, moves);
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> moves;
    towerOfHanoi(n, 1, 2, 3, moves);
    cout << moves.size() << endl;
    for (const auto& move : moves) {
        cout << move.first << " " << move.second << endl;
    }
    return 0;
}