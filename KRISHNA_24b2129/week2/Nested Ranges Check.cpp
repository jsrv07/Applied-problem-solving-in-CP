
#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> x(n), y(n);
    for (int i = 0; i < n; ++i)
        cin >> x[i] >> y[i];

    vector<int> contains(n, 0);
    vector<int> contained(n, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
   
            if (x[i] <= x[j] && y[j] <= y[i])
                contains[i] = 1;
           
            if (x[j] <= x[i] && y[i] <= y[j])
                contained[i] = 1;
        }
    }
    for (int i = 0; i < n; ++i)
        cout << contains[i] << " ";
    cout << "\n";  
    for (int i = 0; i < n; ++i)
        cout << contained[i] << " ";
 
}
  


// second method



// struct Range {
//     int x, y, index;
// };

// bool compare(Range a, Range b) {
//     if (a.x == b.x)
//         return a.y > b.y; // longer range comes first
//     return a.x < b.x;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<Range> ranges(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> ranges[i].x >> ranges[i].y;
//         ranges[i].index = i;
//     }

//     sort(ranges.begin(), ranges.end(), compare);

//     vector<int> contains(n, 0);       // Does it contain someone?
//     vector<int> contained_by(n, 0);   // Is it contained by someone?

//    for(int i=n-1;i>=0;i--){
//     for(int j=0;j<i;j++){
//         if(ranges[i].y <= ranges[j].y){
//             contained_by[ranges[i].index]=1;
//             break;
//         }
//         else if(j==i-1){
//             contained_by[ranges[i].index]=0;
//             break;
//         }
//     }
//    }
//    for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(ranges[i].y>=ranges[j].y){
//             contains[ranges[i].index]=1;
//             break;
//         }
//         else if(j==n-1){
//             contains[ranges[i].index]=0;
//             break;
//         }
//     }
//    }
//     // Output
//     for (int i = 0; i < n; ++i)
//         cout << contains[i] << " ";
//     cout << "\n";
//     for (int i = 0; i < n; ++i)
//         cout << contained_by[i] << " ";
//     cout << "\n";
// }
