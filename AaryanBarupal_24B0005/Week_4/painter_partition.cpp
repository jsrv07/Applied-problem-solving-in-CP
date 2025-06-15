class Solution {
  public:
    bool canDo(int mid,vector<int>& arr,int k){
        int count=1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]+sum>mid){
                count++;
                sum=arr[i];
            }
            else{
                sum+=arr[i];
            }
        }
        return count<=k;
    }
    int minTime(vector<int>& arr, int k) {
        int left=*max_element(arr.begin(),arr.end());
        int right=accumulate(arr.begin(),arr.end(),0);
        int answer=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(canDo(mid,arr,k)){
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