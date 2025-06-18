// #include <iostream>
// using namespace std;

// bool coinpiles(int a, int b){
//     if (a==0 && b==0){
//         return 1;
//     }

//     if (a<0 || b<0){
//         return 0;
//     }

//     return coinpiles(a-1, b-2) || coinpiles(a-2, b-1);
// }

// int main(){
//     int n, a, b;
//     cin>>n;
//     int ans[n];
//     for (int i=0; i<n; i++){
//         cin>>a>>b;
//         ans[i]=coinpiles(a, b);
//     }
//     for (int i=0; i<n; i++){
//         if (ans[i]==1){
//             cout<<"YES"<<endl;
//         }
//         else {
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main(){
    int n, a, b, big, small;
    cin >> n;
    int ans[n];
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        big = max(a, b);
        small = min(a, b);
        if ((a + b) % 3 == 0 && small * 2 >= big) {
            ans[i]=1;
        }
        else {
            ans[i]=0;
        }
    }
    for (int i=0; i<n; i++){
        if (ans[i]==1){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}