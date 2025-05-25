#include<iostream>
using namespace std;
void coins(int a,int b){
    if((a+b)%3==0 && min(a,b)>=max(a,b)/2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        coins(a[i],b[i]);
    }
}