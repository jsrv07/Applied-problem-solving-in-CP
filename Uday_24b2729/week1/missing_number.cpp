#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int val ;
//     vector<int> arr;
//     bool final = false;
//     int z;
//     int p = n;

//     while(n-1>0){
//         cin >> val;
//         arr.push_back(val);
//         n= n-1;
//     }

//     for(int i = 1 ; i<= p; i++){
//         bool isfound = true;
//         for(auto x : arr){
//             if (x == i){
//                 isfound = false;
//                 break;
//             }
//         }

//         if(isfound){
//             z = i;
//             final = true;
//         }
//     }

//     if(final){
//         cout << z << endl;
//     }
    
// }

// so this is the first solutin which i though i haev written it in two loops so it will go to time o(n2) which is
// too much for this problem
// o(n2) is only good if input size is less than 5000

// i am thinking to do it one loop 
// i kind of stuck in doing that in one loop

// one of soln which i remembere this total - sum 

int main(){
    int n;
    cin >> n;
    int total ;
    int sum = 0;
    int value;
    // for(int i = 1; i<= n ; i++){
    //     total += i;
    // }

    total = (n * (n+1))/2;
    // one question is here where do i put the bracket 
    // remember to use precise bracket due to  precedence 
    for( int i = 0; i< n-1 ; i++){
        cin >> value;
        sum += value;
    }

    cout << (total - sum) << endl;


}

// so this is good and also some sort of good and after searching some soln i found out 
// we can use the formula for total  here instead which will make it , but how much which i don't know
// but will know it later.

// after some searching the formula will be much more effiecient as it
// will be o(1) that is constant no matter how much large will be the numbers
// but for loop ut will be o(n)