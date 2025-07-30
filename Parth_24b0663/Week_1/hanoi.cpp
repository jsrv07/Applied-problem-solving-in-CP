#include<bits/stdc++.h>
using namespace std;
void fn(int n, char initial, char middle, char final){
    if(n==0) return;
    fn(n-1, initial, final , middle);
    cout<<initial<<" "<<final<<endl;
    fn(n-1,middle,initial,final);
}
int main(){
    long int n, m;
    m=1;
    cin>>n;
    for(int i=1;i<n;i++){
        m=m*2+1;
    }
    cout<<m<<endl;
    fn(n,'1','2','3');
}