#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    int a, b, min, max;
    for(int i=0; i<t; i++){
        cin >> a >> b;
        min = (a<b) ? a:b;
        max = (a>b) ? a:b;
        if((a+b)%3==0 && max <= 2*min){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
