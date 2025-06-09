#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
    int target = 2;

    auto  p  = equal_range(arr.begin() , arr.end(),target);

    cout << p.second - p.first;
}