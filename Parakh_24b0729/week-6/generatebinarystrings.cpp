class Solution {
  public:

void generateNoConsecutiveOnes(int n, string current, char lastChar, vector<string>& result) {
    if (n == 0) {
        result.push_back(current);
        return;
    }

    // You can always add '0'
    generateNoConsecutiveOnes(n - 1, current + "0", '0', result);

    // You can only add '1' if last char is not '1'
    if (lastChar != '1') {
        generateNoConsecutiveOnes(n - 1, current + "1", '1', result);
    }
}

vector<string> generateBinaryStrings(int N) {
    vector<string> result;
    generateNoConsecutiveOnes(N, "", ' ', result); // ' ' means no last char
    return result;
}
};
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}