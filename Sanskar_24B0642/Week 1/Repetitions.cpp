#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;

    int max=1, curr=1;

    for (int i=1; i<s.length(); i++){
        if (s[i]==s[i - 1]) {
            curr++;
        }
        else {
            curr=1;
        }

        if (curr>max) {
            max=curr;
        }
    }
    cout<<max<<endl;
    return 0;
}
