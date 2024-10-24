class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int>prefix(n), suffix(n), ans(n);
        prefix[0] = 1;
        suffix[n-1] = 1;
        for(int i=n-2; i>=0; i--)
        {
            suffix[i] = nums[i+1]*suffix[i+1];
        }
        for(int i=1; i<nums.size(); i++)
        {
            prefix[i] = nums[i-1]*prefix[i-1];
            ans[i] = prefix[i]*suffix[i];
        }
        ans[0] = prefix[0]*suffix[0];
        /*for(int i=0; i<n; i++)
        {
            cout<<prefix[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<suffix[i]<<" ";
        }
        cout<<endl;*/
        return ans;
    }
};