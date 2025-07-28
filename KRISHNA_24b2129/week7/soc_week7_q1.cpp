class Solution {
public:
    int fib(int n) {
       if(n<2){
        return n;
       }
        
        long long fn1=0,fn2=1,fn3;
        while(n-1){
            fn3=fn1+fn2;
            fn1=fn2;
            fn2=fn3;
            n--;
        }
        return fn3;
    }
};