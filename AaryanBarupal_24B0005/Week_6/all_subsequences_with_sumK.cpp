#include<bits/stdc++.h>
using namespace std;
void all_sequences(vector<int>& temp,int sum,vector<int>& vec,int k,vector<vector<int>>& answer,int start){
    if(sum==k){
        answer.push_back(temp);
    }
    if(start==vec.size()){
        return;
    }
    temp.push_back(vec[start]);
    all_sequences(temp, sum + vec[start], vec, k, answer, start + 1);
    temp.pop_back();
    all_sequences(temp,sum,vec,k,answer,start+1);
}
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;++i){
        cin>>vec[i];
    }
    int k;
    cin>>k;
    vector<vector<int>>answer;
    vector<int>temp;
    all_sequences(temp,0,vec,k,answer,0);
    for(vector<int>el : answer){
        for(int val: el){
            cout<<val<<" ";
        }
        cout<<endl;
    }
}