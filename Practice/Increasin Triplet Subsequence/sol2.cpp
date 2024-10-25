class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        long long n = nums.size();
        //vector <int> leftmin(n);
        //vector <int> rightmax(n);
        int firstmin = INT_MAX;
        int secondmin = INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(firstmin>=nums[i])
            {
                firstmin = nums[i];
            }
            else if(secondmin >= nums[i])
            {
                secondmin = nums[i];
            }
            else if(secondmin < nums[i])// && secondmin != INT_MAX)
            {
                return true;
            }
        }
        return false;
    
};