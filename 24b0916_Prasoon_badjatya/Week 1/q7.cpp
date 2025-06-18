#include<iostream>
#include<vector>
#include<string>

using namespace std;
void TowerOfHanoi(int n, int start, int middle, int target, int i = 0) {
    int m = 1;
    for(int j(0); j<n-1; j++) {
        m = 2*m+1;
    }
    if(i == 0) cout << m << endl;
    if (n == 1) {
        cout << start << " " << target << endl;
    }
    else {
        TowerOfHanoi(n-1, start, target, middle, 1);
        cout << start << " " << target << endl;
        TowerOfHanoi(n-1, middle, start, target, 1);
    }
}
int main(){
    int n;
    cin >> n;
    TowerOfHanoi(n, 1, 2, 3, 0);
}