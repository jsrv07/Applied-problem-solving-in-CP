#include <iostream>
using namespace std;
void sort(int n,int sou,int help,int des){
    if(n==1){
        cout<<sou<<" "<<des<<endl;
        return;
    }

    sort(n-1,sou,des,help);
    cout<<sou<<" "<<des<<endl;
    sort(n-1,help,sou,des);
    
}
int main(){
    int n;
    cin>>n; 
    cout<<(1LL<<n)-1<<endl;
    sort(n,1,2,3);
}

