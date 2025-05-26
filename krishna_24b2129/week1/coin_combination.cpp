#include <iostream>
#include<vector>
using namespace std;

int count(vector<int>& arr,int x){
    if(x==0){
        return 1;
    }
    if(x<0)
    return 0;

    int ways=0;
    for(int coin: arr){
        ways+=count(arr,x-coin);
    }
    return ways;
}
int main(){
    int n,x;
    cin>>n>>x;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<count(arr,x);
}