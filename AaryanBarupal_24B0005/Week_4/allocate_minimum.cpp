class Solution {
  public:
    bool pages(int temp,vector<int>& arr,int k){
        int count=1;
        int sum=0;
        for(int val: arr){
            if(sum+val>temp){
                count++;
                sum=val;
            }
            else{
                sum+=val;
            }
        }
        return count<=k;
    }
    int findPages(vector<int> &arr, int k) {
        if(arr.size() < k) return -1;
        int left = *max_element(arr.begin(), arr.end());
        int right = accumulate(arr.begin(), arr.end(), 0);
        int answer=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(pages(mid,arr,k)){
                answer=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return answer;
    }
};