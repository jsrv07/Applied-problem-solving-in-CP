#include <iostream>

bool check_coin_piles(int a, int b){
    while(1){
        if(a >= 3 and b >= 3){
            a -= 3; b -= 3;
        }
        else if(a >= 3 || b >= 3) return false;
        else if((a == 0 && b == 0) || (a == 1 && b == 2) || (a == 2 && b == 1)) return true;
        else return false;
    }
}

int main(){
    int n{}, a{}, b{};
    std::cin >> n;
    for(int i{}; i < n; i++){
        std::cin >> a >> b;
        if(check_coin_piles(a, b)){
            std::cout << "YES" << "\n";
        }
        else{
            std::cout << "NO" << "\n";
        }
    }
}