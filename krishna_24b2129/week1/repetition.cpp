#include <iostream>
using namespace std;
int longeststring(string s,int index=1,int maxlen=1,int currlen=1){
    if(index==s.length()){
        return maxlen;
    }
        if(s[index]==s[index-1]){
            currlen++;
        }
        else {
            currlen=1;
        }
        if(currlen>maxlen){
            maxlen=currlen;
        }
    return longeststring(s,index+1,maxlen,currlen);
   
}
int main(){
    string s;
    cin>>s;

    cout<<longeststring(s,1,1,1);
}