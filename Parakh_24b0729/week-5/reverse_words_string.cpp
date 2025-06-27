#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n= s.length();
        int i =0;
        while(i<n  && s[i]==' ') i++;

        string temp;
        bool spacepen=false;
        for(;i<n;i++){
            if(s[i]!=' '){
                if(spacepen){
                    temp+=' ';
                    spacepen=false;
                }
                temp+=s[i];
            }
            else{
                if(!temp.empty()){
                    spacepen=true;
                }
            }
        }
        reverse(temp.begin(), temp.end());
        int start =0;
        for(int end =0; end<=temp.size(); ++end){
            if(end ==temp.size()|| temp[end]==' '){
                reverse(temp.begin()+start, temp.begin()+end);
                start=end+1;
            }
        }
        return temp;
    }

};
int main() {
    
    return 0;
}