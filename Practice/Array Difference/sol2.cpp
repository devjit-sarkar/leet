class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector <int> n1,n2;
        
        unordered_set <int> umap1(nums1.begin(), nums1.end());
        unordered_set <int> umap2(nums2.begin(), nums2.end());

        for(int num: umap1)
        {
            if(umap2.find(num) == umap2.end())
            {
                n1.push_back(num);
            }
        }
        for(int num: umap2)
        {
            if(umap1.find(num) == umap1.end())
            {
                n2.push_back(num);
            }
        }
        return {n1,n2};
    }
};