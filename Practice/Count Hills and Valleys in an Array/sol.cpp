class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        vector<int> m;

        // cout<<((true)?prev:nums[0])<<endl;
        for(int i = 0; i<n-1; i++){
            if(nums[i] != nums[i+1]){
                m.push_back(nums[i]);
            }
        }
        m.push_back(nums[n-1]);
        n = m.size();
        for(int i = 0; i<n; i++){
            cout<<m[i]<<" ";
        }
        cout<<endl;

        for(int i=1; i<n-1; i++){
            if(m[i] > m[i-1] && m[i] > m[i+1]){
                cout<<"hill: "<<m[i]<<endl;
                count++;
            }
            else if(m[i] < m[i-1] && m[i] < m[i+1]){
                cout<<"valley: "<<m[i]<<endl;
                count++;
            }
        }
        return count;
    }
};