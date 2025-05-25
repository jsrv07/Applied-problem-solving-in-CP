#include<bits/stdc++.h>
using namespace std;

int main(){
    int no_app ;
    int no_appart;
    int max_all_diff;

    cin >> no_app >> no_appart >> max_all_diff ;

    vector<int> desired_app_size(no_app);
    for(int i = 0; i< no_app ;i++){
        cin >> desired_app_size[i];
    }
    // can take desired appartment size plus minus max appartment diif.

    vector<int> actual_app_size(no_appart);
    for(int i = 0; i< no_appart ; i++){
        cin >> actual_app_size[i];
    }
    int count = 0;
    sort(desired_app_size.begin() , desired_app_size.end());
    sort(actual_app_size.begin() , actual_app_size.end());

    for(int i = 0 ; i< no_app ; i++){
        for (int j = 0 ; j< no_appart ; j++){
            if(((actual_app_size[j] - desired_app_size[i]) <5 ||(actual_app_size[j] - desired_app_size[i]) > -5) ){
                count++;
                break;
            }

        }
    }

    return count;

}

//  this is so worst approach it will o(n2) and it is tood bad
// think to decrease its complexity
