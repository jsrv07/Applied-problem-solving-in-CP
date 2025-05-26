#include <iostream>
#include <vector>

int main(){
    int l{}, p{};
    int n{}, x{};
    int e{};
    std::cin >> n >> x;
    std::vector<int> vect;
    for(int i{}; i < n; i++){
        std::cin >> e;
        vect.push_back(e);
    }

    //sort
    for(int i{n - 1}; i >= 0; i--){
        int max = vect[0], maxi{};
        for(int j{0}; j <= i; j++){
            if(max < vect[j]){
                max = vect[j];
                maxi = j;
            }
        }
        vect[maxi] = vect[i];
        vect[i] = max;
    }

    while(n - p > 0){
        if(n - p == 1){
            p++;
            l++;
        }
        else if(vect[p] + vect[n-1] > x){
            vect.pop_back();
            n--;
            l++;
        }
        else{
            vect.pop_back();
            p++;
            n--;
            l++;
        }
    }
    std::cout << l << "\n";
}