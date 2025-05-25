#include <bits/stdc++.h>
using namespace std;

int main(){

    char prev  = '&';
    char curr ;
    int count = 0;
    int max = 0;
    while(cin >> curr){
        if(prev == curr || prev == '&' ){
        prev = curr;
        count ++;
        if(max < count){
            max = count;
        }
        }
        else{
            prev = curr;
            count = 1;
        }        
    }
    cout << max; 
}

