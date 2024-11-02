class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size(), flag;
        vector <int> n1,n2;
        vector <vector <int>> n3;
        
        unordered_map <int,int> umap;
        for(int num:nums1)
        {   
            flag = 0;
            for(int i=0; i<n; i++)
            {
                if(num == nums2[i])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0 && umap[num] == 0)
            {
                n1.push_back(num);
                umap[num]++;
            }
        }
        umap.clear();
        for(int num:nums2)
        {   
            flag = 0;
            for(int i=0; i<m; i++)
            {
                if(num == nums1[i])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0 && umap[num] == 0)
            {
                n2.push_back(num);
                umap[num]++;
            }
        }
        /*for(int num:nums1)
        {   
            flag = 0;
            for(int i=0; i<n; i++)
            {
                if(num == nums2[i])
                {
                    flag = 1;
                }
            }
            if(flag == 0)
            {
                n1.push_back(num);
            }
        }
        for(int num:nums2)
        {   
            flag = 0;
            for(int i=0; i<m; i++)
            {
                if(num == nums1[i])
                    flag = 1;
            }
            if(flag == 0)
            {
                n2.push_back(num);
            }
        }*/
        n3.push_back(n1);
        n3.push_back(n2);
        return n3;
    }
};