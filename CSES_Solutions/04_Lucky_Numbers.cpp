#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; ++i)
        for (int j = 0; j < n-i-1; ++j)
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

int main() {
    int n, x;
    cin >> n >> x;
    int p[200000]; 
    for (int i = 0; i < n; i++)
        cin >> p[i];

    bubbleSort(p, n);

    int i = 0, j = n - 1;
    int gondolas = 0;

    while (i <= j) {
        if (p[i] + p[j] <= x)
            i++; 
        j--; 
        gondolas++;
    }

    cout << gondolas << endl;
}
