package Week_4;
import java.util.Arrays;

class Solution {
    
    // Function to check if books can be allocated to
    // all k students without exceeding 'pageLimit'
    static boolean check(int[] arr, int k, int pageLimit) {
        
        // Starting from the first student
        int cnt = 1;
        int pageSum = 0;
        for(int i = 0; i < arr.length; i++) {
            
            // If adding the current book exceeds the page 
            // limit, assign the book to the next student
            if(pageSum + arr[i] > pageLimit) {
                cnt++;
                pageSum = arr[i];
            }
            else {
                pageSum += arr[i];
            }
        }
        
      	// If books can assigned to less than k students then
    	// it can be assigned to exactly k students as well
        return (cnt <= k);
    }

    static int findPages(int[] arr, int k) {
        
        // If number of students are more than total books
        // then allocation is not possible
        if(k > arr.length)
            return -1;
        
        // Minimum and maximum possible page limits
        int minPageLimit = Arrays.stream(arr).max().getAsInt();
        int maxPageLimit = Arrays.stream(arr).sum();

        // Iterating over all possible page limits
        for(int i = minPageLimit; i <= maxPageLimit; i++) {
            
            // Return the first page limit with we can
            // allocate books to all k students
            if(check(arr, k, i))
                return i;
        }

        return -1;
    }
}