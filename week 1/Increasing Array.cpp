#include <iostream>
using namespace std;

int main() 
{
    long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;++i){
      int p;
      cin>>p;
      arr[i]=p;
    }
    long long int m=0;
    for(int i=1;i<n;++i){
      if(arr[i]<arr[i-1]){
        m=m-arr[i]+arr[i-1];
        arr[i]=arr[i-1];
      }
    }
    cout<<m;
    return 0;
}