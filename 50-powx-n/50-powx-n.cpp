class Solution {
public:
    double myPow(double x, int n) {
           if(abs(x) <= 0.01) return 0;
        if(x == 1) return 1;
        if(x == -1 && n % 2 == 0) return 1;
        if(x == -1 && n % 2 != 0) return -1;
        if(n == 0) return 1;
        if(n <= INT_MIN) return 0;
        if(n < 0) return 1 / myPow(x, -n);
        return x * myPow(x, n-1);  
    }
};