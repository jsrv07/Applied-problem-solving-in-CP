#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    
   
    
    vector<int> input(n);
    vector<int> ds;
    for(int i = 0; i< n ; i++){
        cin >> input[i];
    }

    sort(input.begin() , input.end());

    ds.push_back(input[0]);
    for(int  i = 1 ; i< n ; i++){
        if(input[i-1] == input[i]) continue;
        else{
            ds.push_back(input[i]);
        }
        
    }

        int result = ds.size();
    
    cout << result;
}

// one more solution which we can done is suing set 

int main() {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << "\n";
}
