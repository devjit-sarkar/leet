class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(), zero_count = 0;
        //remove zeroes and count the number of zeroes
        if(n!=1)
        {
            for(int i=0; i<n; i++)
            {
                if(nums[i] == 0)
                {
                    zero_count++;
                    nums.erase(nums.begin()+i);
                    cout<<nums.size()<<endl;
                    // if(i != 0 && nums[i-1] != 0)
                    // {
                    //    i--;
                    // }
                    i--;
                    n--;
                }
            }
            //add back the zeroes
            for(int i=0; i<zero_count; i++)
            {
                nums.push_back(0);
            }
        }
    }
    // void swap(int &a, int &b)
    // {
    //     int temp = a;
    //     a = b;
    //     b = temp;
    // }
};