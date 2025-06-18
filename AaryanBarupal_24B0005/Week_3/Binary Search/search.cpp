#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& vec,int target){
    int l=0;
    int r=vec.size()-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(vec[mid]>target) l=mid+1;
        else r=mid;
    }
    return l;
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
    int target;
    cin>>target;
    cout<<search(vec,target);
}