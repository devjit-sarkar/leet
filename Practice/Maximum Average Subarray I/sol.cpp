class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size(), size=0,i;
        double avg, maxAvg=-10000,sum = 0;
        if(nums.size() == 1)
            return nums[i];
        for(i=0; i<n; i++)
        {
            if(size == k)
            {
                avg = sum/k;
                maxAvg = (maxAvg<avg)?avg:maxAvg;
                sum -= nums[i-k];
                sum += nums[i];
            }
            
            else if(size < k)
            {
                sum += nums[i];
                size++;
            }
        }
        avg = sum/k;
        maxAvg = (maxAvg<avg)?avg:maxAvg;
        return maxAvg;
    }
};