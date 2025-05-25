// #include <bits/stdc++.h>
// using namespace std;

// void Tower_of_hanoi(int n, int start , int end){
//     int middle = start + end - 2;
    
//     if(n==1) {
//         cout << start  << " " <<  end;
//     }

//     Tower_of_hanoi(n-1,start, end);
//     // Tower_of_hanoi(1, start, middle);
//     cout << start << " " << middle;

//     Tower_of_hanoi(n-1,middle, end);

// }



// it is the question which i was unable to do at first even after doing it one time before this
// maybe i was trying ot rmemeber the thing swhich i shouldn't have remembered as we nedd middle 
// in the argument section.


#include <bits/stdc++.h>
using namespace std;
#include <cmath>

void Tower_of_hanoi(int n, int start, int end, int middle,long long &count) {
    
    if (n == 1) {
        cout << start << " " << end << endl;
        count++;
        return;
    }
    Tower_of_hanoi(n - 1, start, middle, end,count);      // Move n-1 disks from start to middle
    cout << start << " " << end << endl;            // Move the nth disk from start to end
    count++;
    Tower_of_hanoi(n - 1, middle, end, start,count);      // Move n-1 disks from middle to end
}

int main() {
    int n;
    cin >> n;
    
    long long count = 0;
    cout << (pow(2,n)-1) << endl;
    Tower_of_hanoi(n, 1, 3, 2,count);
    
    return 0;
}



