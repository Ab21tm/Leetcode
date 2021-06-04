#include <math.h>

class Solution {
public:
    double helper(double x, int n){
        if(n==0){
            return 1;
        }
        else if(n%2==0){
            double temp = helper(x,n/2);
            double result = temp * temp;
            return result;
        }
        else{
            double temp = helper(x,floor(n/2));
            double result = x * temp * temp;
            return result;
        }
    }
    
    double myPow(double x, int n) {
        if(n<0){
            return 1/helper(x,n);
        }
        return helper(x,n);
    }
    
};