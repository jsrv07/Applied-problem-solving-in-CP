#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool coinPiles(int a, int b){
    if((a == 2 && b == 1) || (a == 1 && b == 2)) return true;
    else if((a == 0 && b == 1) || (a == 1 || b == 0)) return false;
    return coinPiles(a-2, b-1) || coinPiles(a-1,b-2);
}

int main(){
    int n;
    cin >> n;
    for(int i(0); i<n; i++) {
        int a, b;
        cin >> a >> b;
        cout << coinPiles(a, b);
    }
}