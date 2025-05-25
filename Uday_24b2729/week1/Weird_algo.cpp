#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  n;
    cin >> n;

    while(n!= 1){
        cout << n << " ";
        if(n%2 ==0){
            n = 1LL * n/2;
        }
        else{
            n = 1LL * 3 * n + 1;
        }
    }
    cout << n;
}

// Always remember to use more bits type data type as in cas eof less it can overflow.
