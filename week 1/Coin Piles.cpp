#include <iostream>
#include <algorithm>
using namespace std;

void myFunction(long int a, long int b) {
  if((a+b)%3==0){
    if(a<=2*b&&b<=2*a){
      cout<<"YES"<<endl;
    }
    else{cout<<"NO"<<endl;}
  }
  else{cout<<"NO"<<endl;}

}
int main() {
  long int n;
  cin>>n;
  for(long int i=0;i<n;++i){
    long int x,y;
    cin>>x>>y;
    myFunction(x,y);
  }
}