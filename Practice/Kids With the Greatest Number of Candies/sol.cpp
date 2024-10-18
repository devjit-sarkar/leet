class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies;
        vector <bool> maxiCandies;
        for(int i=0; i<candies.size(); i++)
        {
            if(i==0)
                maxCandies = candies[0];
            else
            {
                if(candies[i]>maxCandies)
                    maxCandies = candies[i];
            }
        }
        for(int i=0; i<candies.size(); i++)
        {
            if(candies[i]+extraCandies >= maxCandies)
                maxiCandies.push_back(true);
            else
                maxiCandies.push_back(false);
        }
        return maxiCandies;
    }
};