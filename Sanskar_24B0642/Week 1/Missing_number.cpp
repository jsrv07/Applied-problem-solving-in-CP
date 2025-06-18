#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, inp;
    cin>>n;
    vector<bool> use(n, 0);
    for (int i=0; i<n-1; i++){
        cin>>inp;
        use[inp-1]=1;
    }
    for (int i=0; i<n; i++){
        if (use[i]==0){
            cout<<i+1;
            break;
        }
    }

    return 0;
}