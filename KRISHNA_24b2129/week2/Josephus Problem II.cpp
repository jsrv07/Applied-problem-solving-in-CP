#include<iostream>
#include<list>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    list<int>s;
    for(int i=1;i<=n;i++){
           s.push_back(i);
    }
    auto it =s.begin();
    while (!s.empty()) {
        for (int i = 0; i < k; ++i) {
            ++it;
            if (it ==s.end()) it =s.begin();
        }

        cout << *it << " ";
        it =s.erase(it);
        if (it ==s.end()) it =s.begin();
    }

    cout << endl;
}