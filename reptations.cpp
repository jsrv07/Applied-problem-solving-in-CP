#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    char c,ans;
    c=s[0];
    int cnt=1,mcnt=1;
    for(int i=1;i<s.length();i++){
        if(c==s[i]){
            cnt++;
        }
        else{
            c=s[i];
            cnt=1;
        }
        if(cnt>mcnt){
            ans=c;
            mcnt=cnt;
        }
    }
    cout<<mcnt;
    return 0;
}
