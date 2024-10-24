class Solution {
public:
    int specialArray(vector<int>& nums) {
        int count;
        for(int i=1; i<=nums.size(); i++)
        {
            count = 0;
            for(int j = 0; j<nums.size(); j++)
            {
                if(i<=nums[j])
                {
                    count++;
                }
            }
            if(count == i)
                return i;
        }
        return -1;
    }
};