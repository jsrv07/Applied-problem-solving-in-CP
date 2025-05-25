#include <bits/stdc++.h>
using namespace std;

int main(){
    typedef long long ll;
    int n;
    cin >> n;
    int val;
    vector<int> arr;

    ll iter = 0;
   

    

    for(int i = 0; i< n ; i++){
        cin >> val;
        arr.push_back(val);
    }

    for(int i = 0 ; i<n-1; i++){
        ll count = 0;
        if(arr[i] > arr[i+1]){
            count += 1LL * arr[i] - arr[i+1];
            arr[i+1] = arr[i];
            iter += count;

        }

    }
    cout << iter << endl;
}

// This is so worst why it is not working on all input 



// always try to take more larger data type here we can take long.
