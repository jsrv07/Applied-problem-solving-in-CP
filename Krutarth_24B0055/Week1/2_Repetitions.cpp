#include <iostream>
#include <string>
using namespace std;

int main(){
    string seq; getline(cin, seq);
    char prev = '\0', curr;
    int count = 1, max_count = 0;
    for(int i=0; i<int(seq.length()); i++){
        if(i>0) prev = curr;
        curr = seq[i];
        if(prev==curr) count += 1;
        else{
            count = 1;
        }
        if (max_count < count) max_count = count;
    }
    cout << max_count << endl;
}
