#include<iostream>
using namespace std;
void path(int n){
    if(n==1){
        return;
    }
    if(n%2==0){
        cout<<"->"<<n/2;
        path(n/2);
    }
    else
{
    cout<<"->"<<n*3+1;
    path(3*n+1);
}}

int main(){
    int n;
    cin>>n;
    cout<<n;
    path(n);
}