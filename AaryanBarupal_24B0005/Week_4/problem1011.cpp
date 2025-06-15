class Solution {
public:
    bool possible(int mid,vector<int>&nums,int days){
        int count=0;
        int dinn=1;
        for(int val: nums){
            count+=val;
            if(count>mid){
                count=val;
                dinn++;
            }
        }
        return dinn<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        int answer=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(possible(mid,weights,days)){
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