package Week_4;

class Solution {
    public int minTime(int[] arr, int k) {
        int max = 0; 
        long sum = 0;
        for(int time : arr) {
            max = Math.max(max, time);
            sum += time;
        }
        
        if(k == 1)  return (int)sum;
        long l = max, r = sum;
        while(l <= r) {
            long mid = (l+r)/2;
            if(valid(mid, arr, k)) 
                r = mid - 1;
            else 
                l = mid + 1;
        }
        return (int)l;
    }
    
    private boolean valid(long target, int[] arr, int k) {
        long total = 0;
        int count = 1;
        for(int time : arr) {
            total += time;
            if(total > target) {
                count++;
                total = time;
                if(count > k)
                    return false;
            }
        }
        
        return true;
    }
}
