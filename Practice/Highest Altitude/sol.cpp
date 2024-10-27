class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        //gain[n] = 0;
        //vector<int>alt(n+1);
        //alt[0] = 0;

        int max = 0, start = 0;
        for(int i=0; i<n; i++)
        {
            start = start+gain[i];
            gain[i] = start;
            //alt[i] = alt[i-1]+gain[i-1];
            if(start>max)
                max = start;
        }
        return max;
    }
};