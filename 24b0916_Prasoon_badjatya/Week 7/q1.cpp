#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    int f0 = 0, f1 = 1;
    for(int i = 2; i <= n; i++){
        f1+=f0;
        f0=f1-f0;
    }
    return (n ? f1:f0);
}

int main(){
    int n;
    cin >> n;
    cout << fib(n);
}