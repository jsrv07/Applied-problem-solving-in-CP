#include<iostream>
using namespace std;
void algo(long long n){
    if(n==1){
        cout<<n;
        return;
    }
    else{
        cout<<n<<" ";
        if(n%2==0){
            algo(n/2);
        }
        else{
            algo(3*n+1);
        }
    }
}
int main(){
    long long n;
    cin>>n;
    algo(n);
}