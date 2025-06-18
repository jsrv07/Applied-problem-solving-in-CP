class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0;
        int num=1;
        while(k>0){
            if(i<arr.size() &&arr[i]==num) i++;
            else{
                k--;
                if(k==0) return num;
            }
            num++;
        }
        return 0;
    }
};