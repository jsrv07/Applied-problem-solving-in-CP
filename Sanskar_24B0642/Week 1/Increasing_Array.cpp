#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    long long count=0;;
    cin>>n;
    vector<int> ans(n);
    for (int i=0; i<n; i++){
        cin>>ans[i];
    }

    for (int i=1; i<n; i++){
        if (ans[i]<ans[i-1]){
            count+=ans[i-1]-ans[i];
            ans[i]=ans[i-1];
        }
    }

    cout<<count<<endl;
    return 0;
}