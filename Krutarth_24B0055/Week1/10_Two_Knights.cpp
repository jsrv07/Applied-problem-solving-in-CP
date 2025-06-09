#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    long long total_pos, attck_pos, non_attck_pos;
    for(int k=1; k<n+1; k++){
        total_pos = 1LL*(k*k)*(k*k-1)/2;
        attck_pos = 1LL*4*(k-1)*(k-2);
        non_attck_pos = total_pos - attck_pos;
        cout << non_attck_pos << endl;
    }
}
