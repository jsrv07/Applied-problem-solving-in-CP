#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int num;
    long long sum = 0, desired_sum = 1LL*n*(n+1)/2;
    for(int i=0; i<n-1; i++){
        cin >> num;
        sum += num;
    }

    int missing = desired_sum - sum;
    cout << missing << endl;
}
