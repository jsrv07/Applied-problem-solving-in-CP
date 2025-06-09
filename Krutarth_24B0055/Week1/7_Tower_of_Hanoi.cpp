#include <iostream>
using namespace std;

long long pow(long long a, long long p) {
    long long res = 1;

    while (p>0){
        if (p%2!=0){
            res *= a;
        }
        a *= a;
        p /= 2;
    }
    return res;
}

void tower(int n, int start, int mid, int end){
    if(n==1){
        cout << start << " " << end << endl;
        return;
    }
    tower(n-1, start, end, mid);
    cout << start << " " << end << endl;
    tower(n-1, mid, start, end);
}

int main(){
    int n; cin >> n;
    long long count = pow(2, n) - 1LL * 1;
    cout << count << endl;
    tower(n, 1, 2, 3);
}
