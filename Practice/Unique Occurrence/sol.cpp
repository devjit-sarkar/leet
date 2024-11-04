class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map <int,int> ar;//arr[i]:frequency
        for(int i=0; i<n; i++)
        {
            ar[arr[i]]++;
        }
        for(const auto p:ar)
        {
            for(const auto q:ar)
            {
                if(p.first != q.first && p.second == q.second)
                    return false;
            }    
        }
        
        return true;
    }
};