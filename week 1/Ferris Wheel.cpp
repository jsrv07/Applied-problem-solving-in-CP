#include <iostream>
#include <algorithm>
using namespace std;

void myFunction(int a, int b) {
  if((a+b)%3==0){
    if(a<=2*b&&b<=2*a){
      cout<<"YES"<<endl;
    }
  }
  else{cout<<"NO"<<endl;}

}
int main() {
  int n;
  cin>>n;
  for(int i=0;i<n;++i){
    int x,y;
    cin>>x>>y;
    myFunction(x,y);
  }
}