class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        using namespace std;

        priority_queue<int> max_heap;
        for(int i=0; i<nums.size(); i++)
        {
            max_heap.push(nums[i]);
        }
        long long cur_lar, tot = 0;
        int cur_lar_in;
        //repeat until you run out of k
        for(int i=0; i<k; i++)
        {
            //find the largest number in the array
            // for(int j=0; j<nums.size();j++)
            // {
            //     if(j==0)
            //     {
            //         cur_lar = nums[0];
            //         cur_lar_in = 0;
            //     }
            //     else
            //     {
            //         if(nums[j] > cur_lar)
            //         {
            //             cur_lar = nums[j];
            //             cur_lar_in = j;
            //         }
            //     }
            // }
            cur_lar = max_heap.top();
            max_heap.pop();
            //add it to the sum, replace the element by ceil(element/3)
            tot += cur_lar;
            max_heap.push(ceil((double)cur_lar/3));
            // cout<<"cur lar is: "<<cur_lar<<endl;
            // nums[cur_lar_in] = ceil((double)cur_lar/3);
            // cout<<"ceil(cur_lar/3): "<<ceil((float)cur_lar/3)<<endl;
            // cout<<"new element: "<<nums[cur_lar_in]<<endl;
            // for(i = 0; i<(sizeof(nums)/sizeof(nums[0])); i++)
            // {
            //     cout<<nums[i]<<" ";
            // }
            // cout<<endl;
        }
        return tot;
    }
};