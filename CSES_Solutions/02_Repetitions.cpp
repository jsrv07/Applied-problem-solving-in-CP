#include<iostream>
using namespace std;

int main(){
    string sequence;
    cin>> sequence;

    int longest=1;
    int current=1;

    for(int i=0; i< sequence.length(); i++){
        if(sequence[i]== sequence[i+1]){
            current++;
        }
        else{
            current =1;
        }

        if( current> longest){
            longest= current;
            }
    }

    cout<< longest << endl;
}