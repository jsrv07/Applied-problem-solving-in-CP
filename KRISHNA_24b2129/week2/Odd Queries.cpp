#include<iostream>
#include<vector>
using namespace std;
void checkodd(vector<int> arr,int n,int& count){
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
return ;
}
void checkODD(vector<int> arr,int l,int r,int& count1){
    for(int i=l-1;i<=r-1;i++){
        if(arr[i]%2!=0){
            count1++;
        }
    }
return ;
}
int main(){
    int test;
    cin>>test;
    vector<string>ans;
    for(int i=0;i<test;i++){
        int n,testcases;
        cin>>n;
        cin>>testcases;
        vector<int>arr(n);
        for(int t=0;t<n;t++){
            cin>>arr[t];
        }
        int count=0;
            checkodd(arr,n,count);
        for(int j=0;j<testcases;j++){
            int l,r,k;
            int count1=0;
            cin>>l>>r>>k;
            checkODD(arr,l,r,count1);
        int p;
        if(k%2==0){
            p=count-count1;
        }
        else p=count-count1+r-l+1;
        
        if(p%2!=0){
            ans.push_back("Yes");
        }
        else ans.push_back("NO");
        }
    }
    for(string ans1:ans){
        cout<<ans1<<endl;
    }
}