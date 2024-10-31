class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector <int> ans;
        unordered_map <int,int> umap;  //value:index
        for(int i=0; i<n; i++)
        {
            auto j = umap.find(target-nums[i]);
            if(j != umap.end())
            {
                ans.push_back(i);
                ans.push_back(j->second);
                goto Stop;
            }
            umap.insert({nums[i],i});
        }
        Stop:
        return ans;
    }
};