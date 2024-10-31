class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size(), count = 0, complement;
        unordered_map <int,int> umap;  //value:index      
        for(int num: nums)
        {
            complement = k-num;
            if(umap[complement]>0)
            {
                count++;
                umap[complement]--;
            }
            else
            {
                umap[num]++;
            }
        }
        return count;
    }
};