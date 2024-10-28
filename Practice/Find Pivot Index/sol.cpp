class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //calculate sum
        int n=nums.size();
        int sum = 0, lsum = 0;
        for(int i=0; i<n; i++)
        {
            sum += nums[i];
        }
        sum -= nums[0];
        if(lsum == sum)
        {
            return 0;
        }
        for(int i = 1; i<n; i++)
        {
            //cout<<"lsum: "<<lsum<<" "<<"sum: "<<sum<<endl;
            lsum += nums[i-1];
            sum -= nums[i];
            //cout<<"lsum: "<<lsum<<" "<<"sum: "<<sum<<endl;
            if(lsum == sum)
            {
                return i;
            }
            /*else
            {
                sum += lsum;
            }*/
        }
        //calculate lef tor right sum
        return -1;
    }
};