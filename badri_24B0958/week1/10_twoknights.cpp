#include <iostream>

int noOfPossibleConfigsOfKnights(int n){
    int m{0};
    m = ((n*n)*((n*n)-1))/2 - ((n-2)*(n-1)*4);
    if(m > 0){
        return m;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    std::cin >> n;
    for(int i{1}; i < n + 1; i++){
        std::cout << noOfPossibleConfigsOfKnights(i) << "\n";
    }
}