class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), suffix =1;
        vector <int> ans(n,1);

        for(int i=1; i<n; i++)
        {
            //prefix[i] = nums[i-1]*prefix[i-1]
            ans[i] = nums[i-1]*ans[i-1];
        }
        
        for(int i=n-2; i>=0 ;i--)
        {
            //suffix[i] = suffix[i+1]*nums[i+1]
            suffix = nums[i+1]*suffix;
            ans[i] *= suffix;
        }
        /*for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;*/
        return ans;
    }
};