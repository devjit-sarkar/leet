class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size(), count = 0;
        unordered_map <int,int> umap;  //value:index
        for(int i =0; i<n; i++)
        {
            umap[nums[i]]++;
        }
        for(int num: nums)
        {
            int complement = k-num;
            if(complement == num)
            {
                if(umap[complement] >=2)
                count++;
                cout<<complement<<": "<<umap[complement]<<"|"<<num<<": "<<umap[num]<<endl;
                umap[complement]--;
                umap[num]--;
            }
            else
            {   if(umap[complement] > 0 && umap[num]>0)
                {
                    count++;
                    cout<<complement<<": "<<umap[complement]<<"|"<<num<<": "<<umap[num]<<endl;
                    umap[complement]--;
                    umap[num]--;
                }
            }
        }
        /*for(const auto &pair: umap)
        {
            cout<<pair.first<<" "<<pair.second<<endl;
        }*/
        return count;
    }
};