#include <iostream>
using namespace std;
int main() {
    long long l,r,t=0;
    cin >> l >> r;
    cout << "YES"<<endl;
    for(long long i=l;i<=r;i++){
        if(t%2==0){cout<<i<<" ";t+=1;}
        else {cout << i <<endl;t+=1;}
    }
}