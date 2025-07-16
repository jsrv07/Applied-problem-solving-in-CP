#include<bits/stdc++.h>
using namespace std;
int solve(int i,int sum,int tight,string& num,int k,vector<vector<vector<int>>>& dp){
    if(i==num.length()) return sum==0?1:0;
    if(dp[i][sum][tight]!=-1) return dp[i][sum][tight];

    int digit=num[i]-'0';
    int ans=0;

    int limit=tight?digit:9;
    for(int j=0;j<=limit;++j){
        ans+=solve(i+1,(sum+j)%k,tight&&(j==digit),num,k,dp);
    }
    return dp[i][sum][tight]=ans;
}
int count(int n,int k){
    string num=to_string(n);
    vector<vector<vector<int>>>dp(num.size(),vector<vector<int>>(k,vector<int>(2,-1)));
    return solve(0,0,true,num,k,dp);
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<count(n,k)<<endl;
}



// #include<bits/stdc++.h>//brute force
// using namespace std;
// int count(int n,int k){
//     int ans=0;
//     for(int i=0;i<=n;++i){
//         int num=i;
//         int sum=0;
//         while(num){
//             sum+=num%10;
//             num/=10;
//         }
//         if(sum%k==0){
//             ans++;
//         }
//     }
//     return ans;
// }
// int main(){
//     int n,k;
//     cin>>n>>k;
//     cout<<count(n,k)<<endl;
// }