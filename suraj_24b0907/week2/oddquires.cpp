#include <iostream>
using namespace std;
int main () {
    int t,n,k,l,r,q,sum=0,sum1=0,temp;
    cin >> t;
    while(t>0){
        cin >> n >> q;
        int arr[n];
        sum=0;
        sum1=0;
        for(int i=0;i<n;i++){
            cin >> temp;
            sum+=temp;
            sum%=2;
            arr[i]=sum;
        }
        sum%=2;
        for(int i=0;i<q;i++){
            cin >> l >> r >> k ;
            (l>1)? sum1=arr[r-1]-arr[l-2] : sum1=arr[r-1];
            (sum1==0)? sum1=0 : sum1=1;
            k=(r-l+1)*k;
            k%=2;
            if((sum+k-sum1)%2==0){cout<<"NO"<<endl;}
            else {cout<<"YES"<<endl;}
        }

        t-=1;
    }
}