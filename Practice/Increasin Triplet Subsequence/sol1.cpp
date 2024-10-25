class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        long long n = nums.size();
        vector <int> leftmin(n);
        vector <int> rightmax(n);
        for(int i=0; i<n; i++)
        {
            //calculate leftmin as min of all i elements from left
            if(i == 0)
            {
                leftmin[i] = nums[i];
            }
            else if(nums[i] < leftmin[i-1])
            {
                leftmin[i] = nums[i];
            }
            else
            {
                leftmin[i] = leftmin[i-1];
            }

        }
        for(int i=n-1; i>=0; i--)
        {
            //calculate rightmax as max of all i elements from right
            if(i == n-1)
            {
                rightmax[i] = nums[n-1];
            }
            else if(nums[i] > rightmax[i+1])
            {
                rightmax[i] = nums[i];
            }
            else
            {
                rightmax[i] = rightmax[i+1];
            }
        }
        for(int i = 0; i<n; i++)
        {
            if(leftmin[i] < nums[i] && nums[i]<rightmax[i])
                return true;
        }
        return false;
    }
};