#include <iostream>



int main(){
    int n = 10;
    int A[10] = {9,8,7,6,5,4,1,2,3,0};
    for(int i{n - 1}; i >= 0; i--){
        int max = A[0], maxi{};
        for(int j{0}; j <= i; j++){
            if(max < A[j]){
                max = A[j];
                maxi = j;
            }
        }
        A[maxi] = A[i];
        A[i] = max;
    }
    for(int i{}; i < n; i++){
        std::cout << A[i];
    }
}