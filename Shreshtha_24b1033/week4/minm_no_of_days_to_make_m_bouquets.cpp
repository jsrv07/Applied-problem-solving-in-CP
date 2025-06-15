class Solution {
public:
    bool isPoss(vector<int>& bloomDay, int m, int k, int day){
        int tot=0;
        for(int i=0;i<bloomDay.size();i++){
            int cnt=0;
            while(i<bloomDay.size() && cnt<k && bloomDay[i]<=day){
                cnt++;i++;
            }
            if(cnt==k){
                tot++;i--;
            }
            if(tot>=m) return true;
            
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k > bloomDay.size()) return -1;
        int l=1;
        int h=1e9;

        while(l<h){
            int mid= (l+h)/2;
            if(isPoss(bloomDay,m,k,mid)) h=mid;
            else l=mid+1;
        }
        return l;
    }
};