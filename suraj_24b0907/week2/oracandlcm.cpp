#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,g,t=0,sum=0,k=-1,g1,pa=0;
    cin >> n;
    int arr[n],ar[n] {};
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(n==2){int lcm = (arr[0]*arr[1])/__gcd(arr[0],arr[1]); cout << lcm  ; return 0;}
    g=arr[0];
    for(int i=0;i<n;i++){
        g=__gcd(g,arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]/=g;
        if(arr[i]==1){t=1;break;}
    }   
    if(t==1){cout<<g;return 0;}
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // cout << "i" << i << "j" <<j << "arr" << arr[i] <<"as" <<arr[j]<<endl;
            if(__gcd(arr[i],arr[j])==1){ar[i]+=1;ar[j]+=1;if(ar[i]==1 && ar[j]==1){pa+=1;}}
        }    
        if(ar[i]>1){sum+=1;k=i;}
        if(sum>=2){cout<<g;return 0;}
    }
    if(sum==1){
        // cout <<"no";
        (k==0)? g1=arr[1] : g1=arr[0];
        for(int i=0;i<n;i++){
            if(i!=k){g1=__gcd(g1,arr[i]);}
        }
        cout << g1*g ; return 0;
    }
    int q=-1;
    if(pa==1){
        // cout <<"yes";
        for(int i=0;i<n;i++){
            if(ar[i]==1){
                (i==0)? g1=arr[1] : g1=arr[0];
                for(int j=0;j<n;j++){
                    if(j!=i){
                    g1=__gcd(g1,arr[j]);}
                }
                (q==-1)? q=arr[i]*g1 : q=__gcd(q,arr[i]*g1);            
                // cout << "i" << i << "g1" << g1 <<"q" << q <<endl;

        }}
        cout << q*g ; return 0;
    }

    cout<<g;
}