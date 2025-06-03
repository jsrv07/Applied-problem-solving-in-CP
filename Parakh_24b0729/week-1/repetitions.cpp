#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int max_count =1;
    for(int i=0; i<s.size(); i++){
        if(s[i]==s[i+1]){
            int count = 1;
            while(s[i]==s[i+1]){
                count++;
                i++;
            }
            max_count = max(max_count, count);
        }

    }
    cout<<max_count<<endl;
    
    return 0;
}