class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int j,multij,index;
        std::unordered_map <int,int> um; //value, index
        std::priority_queue <int, std::vector <int>, std::greater<int>> pq;
        for(int i=0; i<nums.size(); i++)
        {
            pq.push(nums[i]);
            um.insert({i, nums[i]});
        }
        //loop for k operations
        for(int i=0; i<k; i++)
        {
            j = pq.top();
            multij = j*multiplier;
            pq.pop();
            pq.push(multij);
            index = nums.size()-1;
            for(const auto p:um)
            {
                if(p.second == j) 
                {
                    if(p.first < index)
                        index = p.first;   
                }
            }
            um[index] = multij;
        }
        

        for(int i=0; i<nums.size(); i++)
        {
            for(const auto p:um)
            {
                if(p.first == i)
                {
                    nums[i] = p.second;
                }
            }
        }
        return nums;
    }
};