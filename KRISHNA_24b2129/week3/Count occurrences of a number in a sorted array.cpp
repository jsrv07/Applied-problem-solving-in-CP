#include<iostream>
using namespace std;
int countnum(int* arr,int n,int x){int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<countnum(arr,n,x);
}