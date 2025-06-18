#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    int x; cin >> x;
    int weights[n], weight;
    for(int i=0; i<n; i++){
        cin >> weight;
        weights[i] = weight;
    }

    sort(weights, weights + n);
    
    int l=0, r=n-1, count=0;
    while(l<=r){
        if(l==r){
            l++;
            count++;
            continue;
        }
        if(weights[l] + weights[r] <= x){
            l++;
            r--;
            count++;
        }
        else{
            r--;
            count++;
        }
    }
    cout << count;
}
