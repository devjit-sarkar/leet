class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(),nzp= 0;
        //nzp finds non-zero elements
        for(int i=0; i<n; i++)
        {
            if(nums[i] != 0)
            {
                nums[nzp] = nums[i];
                nzp++;
            }
        }
        for(int i=nzp; i<n; i++)
        {
            nums[i] = 0;
        }
        // while(nums.size() != n)
        // {
        //     nums.push_back(0);
        // }
    }
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
};