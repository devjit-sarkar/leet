class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;        
        //__builtin_popcount(arr[j])
        for(int i=0; i<n; i++)
        {
            pq.push({__builtin_popcount(arr[i]), arr[i]});
        }
        int i = 0;
        while(!pq.empty())
        {
            arr[i] =pq.top().second;
            pq.pop();
            i++;
        }
        return arr;
    }
};