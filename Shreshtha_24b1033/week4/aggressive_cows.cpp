// User function Template for C++

class Solution {
  public:
  
   
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(),stalls.end());
        int ans=0;
        int l=1;
        int h=stalls[stalls.size()-1]-stalls[0];
        while(l<=h){
            int mid=(l+h)/2;
            if(check(stalls,k,mid)){
                ans=mid;
                l=mid+1;
            }
            else h=mid-1;
        }
        return ans;
    }
    private:
    bool check(vector<int>stalls, int k, int dist){
        int cnt=1;
        int prev=stalls[0];
        for(int i=1; i<stalls.size();i++){
            if(stalls[i]-prev >=dist){
                prev=stalls[i];
                cnt++;
            }
        }
        return cnt>=k;
    }

};