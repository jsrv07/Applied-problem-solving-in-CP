#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;

        if((a+b)%3 == 0 && (2 * min(a ,b) >=max(a,b) )){
        cout << "YES\n";
        }
        else{
        cout << "NO\n" ;
        }
    }

  
}

// I was not able to find the cases in which these will go to like if  condition of min and maximum 
// which i has to see the solution 