#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& stalls,int cows,int dist){
    int ct=1;
    int previous=stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-previous>=dist){
            previous=stalls[i];
            ct++;
        }
    }
    return ct>=cows;
}
int min_distance(vector<int>& stalls,int cows){
    sort(stalls.begin(),stalls.end());
    int l=1;
    int r=stalls.back()-stalls[0];
    int distance=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(check(stalls,cows,mid)){
            distance=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return distance;
}
int main(){
    int n;
    cin>>n;
    vector<int>stalls;
    while(n--){
        int x;
        cin>>x;
        stalls.push_back(x);
    }
    int cows;
    cin>>cows;
    cout<<min_distance(stalls,cows);
}