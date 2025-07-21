#include <bits/stdc++.h>
using namespace std;

    int climbStairs(int n) {
        int f1 = 1, f2 = 1;
        for(int i = 2; i <= n ; ++i){
            f2 += f1;
            f1 = f2-f1;
        }
        return f2;
    }

int main(){
    int n;
    cin >> n;
    cout << climbStairs(n);
}