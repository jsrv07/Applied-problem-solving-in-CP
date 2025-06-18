#include<bits/stdc++.h>
using namespace std;
bool check(string s1,string s2){
    if(s1.find(s2)!=string::npos) return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        int count=0;
        bool flag=false;
        while(count<=6){
            if(check(s1,s2)){
                cout<<count<<endl;
                flag=true;
                break;
            }
            else{
                s1+=s1;
                count++;
            }
        }
        if(!flag)
        cout<<-1<<endl;
    }
}