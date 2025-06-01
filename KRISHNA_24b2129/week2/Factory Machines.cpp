#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int>times(n);
    for(int i=0;i<n;i++){
        cin>>times[i];
    }
    long long startime=0,maximumtime=*max_element(times.begin(),times.end())*t,exacttime;
        while(startime<=maximumtime){
                exacttime=(startime+maximumtime)/2;
        
                long long total=0;
        for(int i=0;i<n;i++){
                total+=exacttime/times[i];
        }
        if(total<t){
            startime=exacttime;
            continue;
        }
        else if(total>t){
            maximumtime=exacttime;
            continue;
        }
        else if(total==t){
            cout<<exacttime;
            break;
        }
        }
}

  