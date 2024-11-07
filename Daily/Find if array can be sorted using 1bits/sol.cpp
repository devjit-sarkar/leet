class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        vector <int> segmentIndex;
        int n=nums.size();
        vector <int> sortedNums(nums.begin(), nums.end());
        sort(sortedNums.begin(), sortedNums.end());
        vector <int> oneBits;
        if(nums == sortedNums)
            return true;
        for(int i=0; i<n; i++)
        {
            oneBits.push_back(__builtin_popcount(nums[i]));
        }
        //bubble sort
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if(nums[j] > nums[j+1] && oneBits[j] == oneBits[j+1])
                {
                    //swap
                    swap(nums[j], nums[j+1]);
                }
            }
        }
        if(nums == sortedNums)
            return true;
        else
            return false;
    }
    void swap(int &a, int &b)
    {
        int temp =a;
        a = b;
        b = temp;
    }
};