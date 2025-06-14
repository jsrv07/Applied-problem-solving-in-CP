#include <iostream>
#include <vector>
using namespace std;

int getMax(vector<int>& weights) {
    int maxi = weights[0];
    for (int i = 1; i < weights.size(); i++) {
        if (weights[i] > maxi) maxi = weights[i];
    }
    return maxi;
}


int getSum(vector<int>& weights) {
    int total = 0;
    for (int i = 0; i < weights.size(); i++) {
        total += weights[i];
    }
    return total;
}


bool canShip(vector<int>& weights, int days, int capacity) {
    int dayCount = 1;  
    int currentWeight = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (currentWeight + weights[i] > capacity) {
            dayCount++;         
            currentWeight = 0;   
        }
        currentWeight += weights[i];
    }
    return dayCount <= days;
}


int shipWithinDays(vector<int>& weights, int days) {
    int low = getMax(weights);   
    int high = getSum(weights);  
    int ans = high;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (canShip(weights, days, mid)) {
            ans = mid;      
            high = mid - 1;
        } else {
            low = mid + 1;  
        }
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    vector<int> weights(n);
    for(int i=0;i<n;i++){
        cin>>weights[i];
    }
    int days;
    cin>>days;
    cout << shipWithinDays(weights, days) << endl;
}