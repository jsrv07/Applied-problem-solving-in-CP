B#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  cin>>s;
  int max=1,current=1;
  for(int i=1;i<s.length();++i){
    if(s[i]==s[i-1]){
      ++current;
      if(current>max){max=current;}
    }
    else{current=1;}
  }
  cout<<max;
  return 0;
}