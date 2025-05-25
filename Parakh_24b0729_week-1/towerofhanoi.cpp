#include <iostream>
using namespace std;

void solveHanoi(int n, int from, int via, int to)
{
    if (n == 0)
        return;
    solveHanoi(n - 1, from, to, via);
    cout << from << " " << to << "\n";
    solveHanoi(n - 1, via, from, to);
}

int main()
{
    int n;
    cin >> n;

    cout << (1 << n) - 1 << "\n";

    solveHanoi(n, 1, 2, 3);

    return 0;
}
