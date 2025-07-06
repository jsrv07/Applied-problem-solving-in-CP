#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1, string s2) {
    if(s1.length() != s2.length())
        return false;
    
    string temp = s1 + s1;
    return temp.find(s2) != string::npos;
}

int main() {
    string s1,s2;
    cin>>s1>>s2;
    if(isRotation(s1, s2))
        cout << "Yes, it is a rotation.";
    else
        cout << "No, it is not a rotation.";
}