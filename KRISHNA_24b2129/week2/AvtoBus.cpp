#include<iostream>
using namespace std;
int main(){
    int l,r;
    cin>>l>>r;
    cout<<"yes"<<endl;
    while(r-l%2!=0){
        for(int i=l;i<=r;i+=2){
            cout<<i<<" "<<i+1<<endl;
        }
        break;
    }
}