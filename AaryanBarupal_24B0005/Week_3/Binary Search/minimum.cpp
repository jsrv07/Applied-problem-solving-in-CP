#include<bits/stdc++.h>
using namespace std;
int find_minimum(vector<int>& vec){
    int l=0;
    int r=vec.size()-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(vec[mid]>vec[r]) l=mid+1;
        else r=mid;
    }
    return vec[l];
}
int main(){
    vector<int>vec;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    cout<<find_minimum(vec);
}