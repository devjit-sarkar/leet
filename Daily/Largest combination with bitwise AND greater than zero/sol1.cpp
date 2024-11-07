class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int maxCount =0, count;
        for(int bit=0; bit<25; bit++)
        {
            count = 0;
            for(int num: candidates)
            {
                if(num & (1<<bit))
                {
                    count++;
                }
            }
            maxCount = (maxCount<count)?count:maxCount;
        }

        return maxCount;
    }
};