class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1)return false;
        while(n>1){
          int  remainder=n%3;
            if(remainder!=0){
                return false;
            }
            else
                n=n/3;
            
        }
        return true;
    }
};