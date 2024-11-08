class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size(), k=0, check, maxXor=0,currXor=0;
        vector <int> currentXors(n,0), ans;
        for(int i=n-1; i>=0; i--)
        {
            for(int j=i; j>=0; j--)
            {
                currentXors[i] = currentXors[i]^nums[j];   
            }
        }
        reverse(currentXors.begin(), currentXors.end());
        for(int i=0; i<n; i++)
        {
            check=0;
            maxXor = 0;
            if(currentXors[i] == 0)
                ans.push_back(pow(2,maximumBit)-1);
            else
            {
                for(k=1; k<pow(2,maximumBit); k++)
                {
                    if((currentXors[i]^k) > currentXors[i])
                    {
                        currXor = k^currentXors[i];
                        if(maxXor<currXor)
                        {
                            maxXor = currXor;
                            check = k;
                        }
                    }
                }
                ans.push_back(check);
            }
        }
        return ans;
    }
};