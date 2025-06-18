#include<iostream>
#include<vector>
#include<string>

using namespace std;

void movingKnight(int n) {
    int temp = 0;
    for(int i(1); i<n; i++) {
        cout << temp << endl;
        temp += (2*i+1)*(i) - 2 + 4*(2*i-4) + (2*i-3)*(2*i-5) + 4*(2*i-2) + (2*i-3)*(2*i-3) + (2*i+1)*(i-2)*(i-2) + 6;
    }
    cout << temp << endl;
}

int main(){
    int n;
    cin >> n;
    movingKnight(n);
}