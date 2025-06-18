#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int largest=1;
    int sum=1;
    for(int i=1;i<str.length();i++){
        if(str[i]==str[i-1]){
            sum++;
        }
        else{
            if(sum>largest){
                largest=sum;
            }
            sum=1;
        }
    }
    largest=max(largest,sum);
    cout<<largest;
}