#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int main()
{
    // Sample Input
    int n , k;
    cin >> n >> k;
    vector<int> t;
    for(int i(0); i<n; i++) t.push_back(i+1);
    int rtk = 0, flag = 0;
    while(!t.empty()) {
        rtk++;
        if(rtk%(k+1) == 0) flag = 1;
        else flag = 0;
        int temp = t[0];
        t.erase(t.begin());
        if(flag) cout << temp << " ";
        else t.push_back(temp);
    }
    return 0;
}