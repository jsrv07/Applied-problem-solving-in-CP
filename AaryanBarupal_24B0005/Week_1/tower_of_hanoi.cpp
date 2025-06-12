#include<iostream>
#include<cmath>
using namespace std;
void hanoi(int n,int a,int b,int c){
    if(n==1){
        cout<<a<<" "<<c<<endl;
    }
    else{
        hanoi(n-1,a,c,b);
        cout<<a<<" "<<c<<endl;
        hanoi(n-1,b,a,c);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    int a=1,b=2,c=3;
    hanoi(n,a,b,c);
}