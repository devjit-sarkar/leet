class Solution {
public:
    int mySqrt(int x) {
        if(x == 0|| x == 1)
            return x;
        long long left = 1, right = x/2, mid, answer;
        while(left <= right)
        {
            mid = left + (right-left)/2;
            if(mid*mid == x)
                return mid;
            else if(mid*mid < x)
            {
                answer = mid;
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }
        return answer;
    }
};