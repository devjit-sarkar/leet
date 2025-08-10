class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0){
            return false;
        }
        if(n == 1){
            return true;
        }
        if(n == -2147483648){
            return false;
        }
        // int leftShift = n<<1;
        for(int i=0; i<31; i++){
            if((1<<i) == n){
                return true;
            }
        }
        return false;
    }
};