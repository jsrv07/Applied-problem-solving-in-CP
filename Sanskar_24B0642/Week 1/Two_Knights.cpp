#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (long long k=1; k<=n; ++k) {
        long long total=k*k*(k*k-1)/2;
        long long atk=0;
        if(k>2){
            atk=4*(k-1)*(k-2);
        }
        cout<<total-atk<<endl;
    }

    return 0;
}
