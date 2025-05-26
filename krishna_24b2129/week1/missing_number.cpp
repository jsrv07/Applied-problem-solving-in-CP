#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1 && i<2*10e5;i++){
        cin>>arr[i];
    }
// int sum=0;
// for(int i=0;i<n-1;i++){
//     sum+=arr[i];                    // secong method by sum
// }
// cout<<(n*(n+1))/2-sum;
// }
for(int i=1;i<=n;i++){
for(int j=0;j<n-1;j++){
    if(i==arr[j]){
        break;                       // by linear search
    }
    else if(j==n-2){
        cout<<i;
    }
}
}
}