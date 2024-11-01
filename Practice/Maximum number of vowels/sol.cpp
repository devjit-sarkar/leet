class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size(), winSize = 0, count = 0, maxCount = 0;
        for(int i=0; i<n; i++)
        {
            //check if vowel, if yes, then add to count, 
            //and then slide the window
            if(winSize < k)
            {
                //check if vowel, if yes then add to count
                if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u')
                    count += 1;
                winSize += 1;
            }
            else if(winSize == k)
            {
                maxCount = (maxCount<count)?count:maxCount;
                //check + slide the window
                if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u')
                    count += 1;
                if(s[i-k] == 'a'||s[i-k] == 'e'||s[i-k] == 'i'||s[i-k] == 'o'||s[i-k] == 'u')
                    count -= 1;
            }
        }
        maxCount = (maxCount<count)?count:maxCount;
        return maxCount;
    }
};