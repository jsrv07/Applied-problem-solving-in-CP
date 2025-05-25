#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , x ;
    cin  >> n >> x;
    vector <int> arr;
    int count = 0;
    int w;

    for(int i = 0; i< n ; i++){
        cin >> w;
        arr.push_back(w);
    }
    sort(arr.begin(), arr.end());
    
    int i = 0; 
    int j = n-1;

    while(i <= j){

        if(arr[i] + arr[j] <= x){
            i++;
            j--;
            count++;
        }
        else{
            j--;
            count++;
        }
    }
    cout << count << endl;
}

// so the problem is that it is counting the value which is alresdy counted.
