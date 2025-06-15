#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    for (int i = 0; i < n; ++i)  cin >> p[i];
    sort(p.begin(), p.end());

    int i = 0, j = n - 1;
    int g = 0;
    while (i <= j) {
        if (p[i] + p[j] <= x) {
            i++;
            j--;
        } 
        else j--;
        g++;
    }
    cout << g << endl;
    return 0;
}
