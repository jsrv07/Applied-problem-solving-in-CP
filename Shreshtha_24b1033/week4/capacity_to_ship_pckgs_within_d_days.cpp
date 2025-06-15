class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int h=accumulate(weights.begin(),weights.end(),0);
        while(l<=h){
            int mid=(l+h)/2;
            int cnt=1;
            int sum=0;
            for(int i=0;i<weights.size();i++){
                if(sum+weights[i] >mid){
                    cnt++;
                    sum=0;
                }
                sum+=weights[i];
            }
            if(cnt>days) l=mid+1;
            else h=mid-1;
        }
        return l;
    }
};