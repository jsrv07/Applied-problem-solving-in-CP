#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cin >> str;
    char c = 'X';
    int max{}, maxx{};
    for(int i{0}; i < str.size(); i++){
        if(c == str[i]){
            max++;
        }
        else{
            c = str[i];
            max = 1;
        }
        if(maxx < max){
            maxx = max;
        }
    }
    std::cout << maxx << "\n";
}