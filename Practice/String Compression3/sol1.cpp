class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        char curr = word[0];
        string compressed = "";
        int freq = 1;
        for(int i=0; i<n-1; i++)
        {
            if(freq < 9)
            {
                if(word[i+1] == curr)
                    freq += 1;
                else
                {
                    compressed += to_string(freq)+curr;
                    curr = word[i+1];
                    freq = 1;
                }
            }
            else
            {
                compressed += to_string(freq)+curr;
                freq = 1;
                if(word[i] != word[i+1])
                {
                    curr = word[i+1];
                }
            }
        }
        compressed += to_string(freq)+curr;
        return compressed;
    }
};