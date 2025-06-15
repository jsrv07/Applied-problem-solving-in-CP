class Solution {
    public:
    bool check(vector<int>& stalls,int dist,int k){
        int count=1;
        int previous=stalls[0];
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-previous>=dist){
                previous=stalls[i];
                count++;
            }
        }
        return count>=k;
    }
    int aggressiveCows(vector<int> &stalls, int k){
        sort(stalls.begin(),stalls.end());
        int left=1;
        int right=stalls.back()-stalls.front();
        int answer=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(check(stalls,mid,k)){
                answer=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return answer;
    }
};