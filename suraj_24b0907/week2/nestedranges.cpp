#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long a[n],b[n],c[n] {},d[n] {};
    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<=a[j] && b[j]<=b[i]){c[i]=1;d[j]=1;}
            else if(a[i]>=a[j] && b[j]>=b[i]){c[j]=1;d[i]=1;}
        }
    }
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
    }
    cout << endl;
    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";
    }
}
