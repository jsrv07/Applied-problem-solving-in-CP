#include <cmath>
class Solution {
  public:
    int nthRoot(int n, int m) {
        double x=(log(m))/n;
        int res=round(pow(M_E,x));
        if(pow(res,n)==m) return res;
        else return -1;
    }
};