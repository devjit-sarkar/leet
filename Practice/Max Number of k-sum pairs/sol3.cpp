class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size(), count = 0, left=0, right=n-1;
        sort(nums.begin(), nums.end());
        while(left<right)
        {
            if(nums[left]+nums[right] == k)
            {
                count++;
                left++;
                right--;
            }
            else if(nums[left]+nums[right] > k)
            {
                right--;
            }
            else if(nums[left]+nums[right] < k)
            {
                left++;   
            }
        }
        return count;
    }
};