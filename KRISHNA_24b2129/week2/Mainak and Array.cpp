#include<iostream>
#include<vector>
using namespace std;
int gcd(int x,int y){
    int mini=min(x,y);
    for(int i=0;i>=0;i++){
    if(x%mini==0 && y%mini==0){
        return mini;
    }
    else {
        mini--;
    }
}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int index=0;index<n;index++){
        for(int supp=index+1;supp<n;supp++){
                ans.push_back((arr[index]*arr[supp])/gcd(arr[index],arr[supp]));
        }
    }
    int mini=INT32_MAX;
    for(int i:ans){
        mini=min(mini,i);
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]%mini!=0){
            mini--;
            i=0;
        }
    }
    cout<<mini;
}