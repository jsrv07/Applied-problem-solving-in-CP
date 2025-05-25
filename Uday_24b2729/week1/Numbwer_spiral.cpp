#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ; 
    cin >> t;
    int row , column ;
    vector<long long> ds;
    for(int i= 0 ; i< t; i++){
        cin  >> row >> column;

        if(row >= column){
            if(row % 2 == 0){
                // cout << (row * row - (column -1));
                ds.push_back(1LL * row * row - (column -1));
            }
            else{
                // cout << ((row-1)* (row-1) + column);
                ds.push_back(1LL * (row-1) * (row-1) + column);
            }
        }

        else{
            if(column % 2 == 0){
                // cout << ( (column-1)* (column-1) +  row);
                ds.push_back( 1LL* (column-1) * (column-1) +  row);
            }
            else{
                // cout << (column*column - (row -1));
                ds.push_back(1LL* column * column - (row -1));
            }
        }

    }

    for(auto x : ds){
        cout << x << "\n";
    }
}

// In this i got the problem  i never though of it as it would of overflow i though tit sconcpet but too long time
// i also didn;t knew how to convert it into ll