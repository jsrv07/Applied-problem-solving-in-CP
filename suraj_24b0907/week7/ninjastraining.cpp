#include <bits/stdc++.h>
using namespace std;
int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>> v(n, vector<int>(4, 0));
    for (int i=0;i<4;i+=1) {
        v[0][i] = 0;
        for (int j=0;j<3;j+=1) {
            if (j!=i) {
                v[0][i] = max(v[0][i], points[0][j]);}}}
    for (int i=1;i<n;i+=1){
        for (int j= 0;j<4;j+=1) {
            v[i][j] = 0;
            for (int k= 0;k<3;k+=1) {
                if (j!=k) {
                    int point = points[i][k] + v[i-1][k];
                    v[i][j] = max(v[i][j], point);}}}}
        return v[n-1][3];
}