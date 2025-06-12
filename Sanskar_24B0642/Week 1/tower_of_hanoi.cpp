#include <iostream>
using namespace std;

void counts(int left, int middle, int right, int n, int &count){
    if (n==1){
        count++;
        return;
    }

    counts(left, right, middle, n-1, count);
    count++;

    counts(middle, left, right, n-1, count);
}

void tower(int left, int middle, int right, int n){
    if (n==1){
        cout<<left<<" "<<right<<endl;
        return;
    }

    tower(left, right, middle, n-1);
    cout<<left<<" "<<right<<endl;

    tower(middle, left, right, n-1);
}

int main(){
    int n, count=0;
    cin>>n;
    counts(1, 2, 3, n, count);
    cout<<count<<endl;
    tower(1, 2, 3, n);
    return 0;
}