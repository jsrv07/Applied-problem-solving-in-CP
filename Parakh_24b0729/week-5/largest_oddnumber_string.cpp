#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        int end = -1;
        for (int i = num.size() - 1; i >= 0; i--) {
            // Check if the digit is odd
            if ((num[i] - '0') % 2 == 1) {
                end = i;
                break;  // no need to continue once last odd digit found
            }
        }
        if (end == -1) return "";  // no odd digit found
        return num.substr(0, end + 1);  // substring from start to end inclusive
    }
};

int main() {
    
    return 0;
}