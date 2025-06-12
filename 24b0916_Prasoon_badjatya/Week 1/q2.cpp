#include<iostream>
#include<vector>
#include<string>

using namespace std;
int repetitions(string s) {
    int m = 0;
    int n = 1;
    for(int i(1); i<s.size(); i++){
        if(s[i] == s[i-1]){
            n++;
            m = max(m, n);
        }
        else n = 1;
    }
    return m;
}
int main(){
    string s;
    cin >> s;
    cout << repetitions(s) << endl;
}