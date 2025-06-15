#include<bits/stdc++.h>
using namespace std;
bool canPlace(vector<int>& stations,int k, double dist){
    int count=0;
    for(int i=1;i<stations.size();i++){
        double d=stations[i]-stations[i-1];
        count+=(int)(d/dist);
    }
    return count<=k;
}
double minimise_dist(vector<int>& stations,int k){
    double left=0.0;
    double right=stations.back()-stations.front();
    double eps=1e-6;
    while(right-left>eps){
        double mid=left+(right-left)/2.0;
        if(canPlace(stations,k,mid)){
            right=mid;
        }
        else{
            left=mid;
        }
    }
    return left;
}
int main(){
    int n;
    cin>>n;
    vector<int>stations(n,0);
    for(int i=0;i<n;i++){
        cin>>stations[i];
    }
    int k;
    cin>>k;
    double answer=minimise_dist(stations,k);
    cout<<fixed<<setprecision(6)<<answer<<endl;
}