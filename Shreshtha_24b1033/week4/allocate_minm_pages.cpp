class Solution {
public:
    int findPages(vector<int>& arr, int k) {
        if(arr.size()<k) return -1;
        int l=*max_element(arr.begin(),arr.end());
        int h=accumulate(arr.begin(),arr.end(),0);
        while(l<=h){
            int mid=(l+h)/2;
            int cnt=1;
            int sum=0;
            for(int i=0;i<arr.size();i++){
                if(sum+arr[i] >mid){
                    cnt++;
                    sum=0;
                }
                sum+=arr[i];
            }
            if(cnt>k) l=mid+1;
            else h=mid-1;
        }
        return l;
    }
};