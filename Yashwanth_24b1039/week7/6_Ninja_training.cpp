#include <bits/stdc++.h>
using namespace std;

int ninjaTraining(int n, vector<vector<int>> &points)
{
    int arr[3]={};
    int a,b,c;
    for(int i=0;i<n;i++){
        a=arr[0];
        b=arr[1];
        c=arr[2];
        arr[0]=points[i][0]+max(b,c);
        arr[1]=points[i][1]+max(a,c);
        arr[2]=points[i][2]+max(a,b);
    }
    int res=*max_element(arr,arr+3);
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> points(n,vector<int>(3));
        for(int i=0;i<n;i++){
            cin>>points[i][0]>>points[i][1]>>points[i][2];
        }
        cout<<ninjaTraining(n,points);      
    }

}