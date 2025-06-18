// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
    /*int l=0;
    int r=arr.size()-1;
    if(arr.size()==1) return 0;
    while(l<=r){
        int mid=(l+r)/2;
        if(mid==l){
            if(arr[l]<arr[r])return l;
            else return r;
        }
        if(arr[mid]>arr[l]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return l; 
*/
    if(arr.size()==1) return 0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]) return i+1;
    }
    return 0;
    
    }
};
