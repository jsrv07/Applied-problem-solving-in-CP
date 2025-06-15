class Solution {
public:
    bool canMake(int day,vector<int>& bloomDay,int m,int k){
        int flowers=0;
        int bouquets=0;
        for(int bloom: bloomDay){
            if(bloom<=day){
                flowers++;
                if(flowers==k){
                    bouquets++;
                    flowers=0;
                }
            }
            else{
                flowers=0;
            }
        }
        return bouquets>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalFlowers=1LL*m*k;
        if(bloomDay.size()<totalFlowers) return -1;
        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());
        int answer=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(canMake(mid,bloomDay,m,k)){
                right=mid-1;
                answer=mid;
            }
            else{
                left=mid+1;
            }
        }
        return answer;
    }
};