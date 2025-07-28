#include<iostream>
#include<algorithm>
using namespace std;
bool check(string s,string t){
        if (s.length() != t.length())
        return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}
int main(){
    string s,t;
    cin>>s>>t;
    (check(s,t))?cout<<"yes":cout<<"no";
}