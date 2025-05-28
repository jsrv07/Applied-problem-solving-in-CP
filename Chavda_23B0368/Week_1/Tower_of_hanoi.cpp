#include <iostream>
#include <vector>
using namespace std;

void hanoi(int n, int source, int target, int auxiliary, int& count, vector<vector<int>>& moves) {
    if (n == 1) {
        moves.push_back({source, target});
        count++;
        return;
    }
    hanoi(n - 1, source, auxiliary, target, count, moves);
    moves.push_back({source, target});
    count++;
    hanoi(n - 1, auxiliary, target, source, count, moves);
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> moves;
    int count = 0;

    hanoi(n, 1, 3, 2, count, moves);

    cout << count << "\n";
    for (const auto& move : moves) {
        cout << move[0] << " " << move[1] << "\n";
    }

    return 0;
}

