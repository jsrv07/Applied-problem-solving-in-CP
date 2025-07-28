#include<iostream>
#include<set>
using namespace std;
void subseq(string s,set<string>& r,int i,string curr){
    if(i==s.length()){
        r.insert(curr);
        return;
    }
    subseq(s,r,i+1,curr+s[i]);
    subseq(s,r,i+1,curr);
    return ;
}


int main(){
    string s;
    cin>>s;
    set<string> r;
    subseq(s,r,0,"");
    for(auto it:r)
{
    cout<<it<<" ";
}
}