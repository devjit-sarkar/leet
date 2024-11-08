class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int maximumXorValue = pow(2,maximumBit)-1, cumulativeXor = 0, n=nums.size();
        vector <int> ans;
        for(int num: nums)
        {
            cumulativeXor ^= num;
        }
        for(int i=0; i<n; i++)
        {
            ans.push_back(cumulativeXor^maximumXorValue);
            cumulativeXor ^= nums[n-i-1];
        }
        return ans;
    }
};
