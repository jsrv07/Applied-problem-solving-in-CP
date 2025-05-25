#include<iostream>
#include<vector>
using namespace std;

const int MOD= 1e9 + 7; 

int main(){
    int n,x;
    cin>> n>> x;

    vector<int> coins(n);
    for(int i=0; i<n; i++){
        cin>> coins[i];
    }

    vector<int> sum(x+1);
    sum[0]= 1;

    for(int i=1; i<=x; i++){
        for(int j=0; j<n;j++){
            if(i-coins[j]>=0){
                sum[i]= (sum[i]+ sum[i-coins[j]])% MOD;
            }
        }
    }

    cout<< sum[x]<< endl;
}
