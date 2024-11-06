class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        
        int setBit = __builtin_popcount(arr[0]);
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if (__builtin_popcount(arr[j]) > __builtin_popcount(arr[j+1]))
                    swap(arr[j], arr[j+1]); //1's sort
                else if(__builtin_popcount(arr[j]) == __builtin_popcount(arr[j+1]))
                    if(arr[j] > arr[j+1])
                        swap(arr[j], arr[j+1]); //ascending order
            }
        }
        return arr;
    }
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b= temp;
    }
};