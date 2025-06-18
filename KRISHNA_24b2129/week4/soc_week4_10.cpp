#include<iostream>
#include<vector>
using namespace std;
    double findmedian(vector<int>& A, vector<int>& B) {
    if (A.size() > B.size()) swap(A, B);
    
    int m = A.size(), n = B.size();
    int low = 0, high = m;

    while (low <= high) {
        int i = (low + high) / 2; // partition A
        int j = (m + n + 1) / 2 - i; // partition B

        int leftA = (i == 0) ? INT32_MIN : A[i - 1];
        int rightA = (i == m) ? INT32_MAX : A[i];
        int leftB = (j == 0) ? INT32_MIN : B[j - 1];
        int rightB = (j == n) ? INT32_MAX : B[j];

        if (leftA <= rightB && leftB <= rightA) {
            if ((m + n) % 2 == 0)
                return (max(leftA, leftB) + min(rightA, rightB)) / 2.0;
            else
                return max(leftA, leftB);
        }
        else if (leftA > rightB)
            high = i - 1;
        else
            low = i + 1;
    }
    return 0.0;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> num1(n1);
    vector<int> num2(n2);
    for(int i=0;i<n1;i++){
        cin>>num1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>num2[i];
    }
   cout<<findmedian(num1,num2);
}