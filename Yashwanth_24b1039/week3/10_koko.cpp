#include <bits/stdc++.h>

using namespace std;

bool canEat(vector<int>&piles,int h,int k){
    if(k<=0) return false;
    int time=0;
    for (int i=0;i<piles.size();i++){
        time+=(piles[i]+k-1)/k;
    }
    return ((time<=h)? true: false);
}
int minEatingSpeed(vector<int>& piles, int h) {
    
    int low=1,high=*max_element(piles.begin(),piles.end()),mid=(low+high)/2;

    while(low<=high){
        
        mid=(low+high)/2;

        if(canEat(piles,h,mid)){ 
            if(!canEat(piles,h,mid-1)) {
                return mid;
                }
            else{
                high=mid-1;
            }
        }
        else low=mid+1;
    }
    return -1;
}

int main(){
    
    int n;
    cin>>n;

    vector<int>piles(n);
    for(int i=0;i<n;i++){
        cin>>piles[i];
    }
    int h;
    cin>>h;

    cout<<minEatingSpeed(piles,h);

}