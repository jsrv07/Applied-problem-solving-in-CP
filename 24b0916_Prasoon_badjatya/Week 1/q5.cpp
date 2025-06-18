#include<iostream>
#include<vector>
#include<string>

using namespace std;
void weirdAlgo(int n) {
    if(n == 1) cout << 1 << endl;
    else if(n%2 == 0) {
        cout << n << " ";
        weirdAlgo(n/2);
    }
    else {
        cout << n << " ";
        weirdAlgo(3*n+1);
    }
}
int main(){
    int n;
    cin >> n;
    weirdAlgo(n);
}