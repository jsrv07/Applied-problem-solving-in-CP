#include <iostream>
#include <vector>


int main(){
    int n{}, m{}; std::cin >> n;
    std::vector<int> vect(n,0);
    for(int i{0}; i < n - 1; i++){
        std::cin >> m;
        vect[m - 1] = 1;
    }
    for(int i{0}; i < n; i++){
        if(vect[i] == 0){
            std::cout << i + 1 << "\n";
            break;
        }
    }
}