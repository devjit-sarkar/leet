class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        long long count, i=0;
        string a = "";
        if(word1.size() < word2.size())
        {
            count =  word1.size();
        }
        else
        {
            count = word2.size();
        }
        for(i=0; i<count; i++)
        {
            a = a+word1[i]+word2[i];
        }
        // i++;
        if(word1.size() > word2.size())
        {
            while(word1[i])
            {
                a = a+word1[i];
                i++;
            }
        }
        else
        {
            while(word2[i])
            {
                a = a+word2[i];
                i++;
            }
        }
    return a;
    }
};