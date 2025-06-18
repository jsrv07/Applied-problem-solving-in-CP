#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n], num;

    for(int i=0; i<n; i++){
        cin >> num;
        arr[i] = num;
    }

    long long nmoves = 0;
    for(int i=1; i<n; i++){
        if(arr[i-1] <= arr[i]) continue;
        nmoves += arr[i-1] - arr[i];
        arr[i] += arr[i-1] - arr[i];
    }
    cout << nmoves;
}
