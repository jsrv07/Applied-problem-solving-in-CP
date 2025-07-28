#include <iostream>
using namespace std;

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n==0) return 1;
        if (n>10) n=10;  
      int total =10; 
          int uniqueDigits =9; 
        int available =9;
        for(int i =2;i<=n;++i) {
            uniqueDigits*=available;
            total +=uniqueDigits;
            available--;
        }
        return total;
    }
};

int main() {
    Solution sol;
    int n;
    cin>>n;
    cout<<sol.countNumbersWithUniqueDigits(n);
}