#include <iostream>

int main(){
    int n{}, a{}, b{}, sum{};
    std::cin >> n;
    std::cin >> a;
    for(int i{}; i < n - 1; i++){
        std::cin >> b;
        if(b < a){
            sum += a - b;
        }
        a = b;
    }
    std::cout << sum << "\n";
}