#include <iostream>

int main(){
    int n{}, a{};
    std::cin >> n;
    for(int i{}; i < n; i++){
        a = 2*a + 1;
    }
    //cuz Sn = 2S(n-1) + 1
    //cuz to move one with n plates
    //we have to first move n-1 to other base 
    //and then move the bottom plate 
    //observe that only this is the possible way as we have to move the bottom plate
    //and one tower empty and one tower having only the bottom plate is the only possible config
    //so all other plates have to be on the other base, possible only if it is in increasing order
    //we have to move the S(n-1) tower and base plate and then S(n-1) tower back on bottom most plate
    //hence the formula
    //ye
    //also S1 = 1 is the base case
    std::cout << a << "\n";
}