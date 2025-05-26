#include <iostream>
#include <vector>

//recursive
int combin(int n, int x, std::vector<int> vect){
    if(x == 0) return 1;
    if(x < 0) return 0;
    int sum{};
    for(int i{}; i < n; i++){
        sum += combin(n, x - vect[i], vect);
    }
    return sum;
}

//TODO: dynamicify

int main(){
    int n{}, x{}, a{};
    std::cin >> n >> x;
    std::vector<int> vect;
    for(int i{}; i < n; i++){
        std::cin >> a;
        vect.push_back(a);
    }
    std::cout << combin(n, x, vect) << "\n";
}