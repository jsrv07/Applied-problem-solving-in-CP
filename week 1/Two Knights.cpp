#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(long long int k=1;k<=n;++k) {
        long long x=(k*k*(k*k-1))/2;
        long long y=0;
        if(k>2){
            y=4*(k-1)*(k-2);
        }
        cout<<x-y<<endl;
    }

    return 0;
}