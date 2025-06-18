#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin >> t;
    int n, m;
    string x, s;
    for(int i=0; i<t; i++){
        cin >> n >> m;
        cin >> x >> s;

        int cnt = -1;
        for(int p = 0; p <= 6; p++){
            if(x.find(s) != string::npos){
                cnt = p;
                break;
            }
            x = x + x;
        }

        cout << cnt << endl;
    }

    return 0;
}
