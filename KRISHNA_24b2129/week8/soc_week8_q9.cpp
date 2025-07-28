#include <bits/stdc++.h>
using namespace std;
int countRec(int n, int sum) {
    if (n==0){
        return sum==0;
    }
    if (sum==0) {
        return 1;
    }
    int ans = 0;
    for (int i=0;i<=9;i++) {
        if (sum-i>=0) {
            ans +=countRec(n-1,sum-i);
        }
    }
    return ans;
}
int countWays(int n, int sum) {
    int ans=0;
    for (int i=1;i<=9;i++) {
        if (sum-i>=0) {
            ans +=countRec(n-1,sum-i);
        }
    }
	if(ans==0) return -1;
    return ans;
}

int main() {
    int n,sum;
    cin>>n>>sum;
	int ans=countWays(n,sum);
  	cout<<ans;
}