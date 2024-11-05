class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        char curr = word[0];
        string compressed = "";
        int freq = 1;
        for(int i=0; i<n-1; i++)
        {
            if(word[i+1] == curr)
            {
                freq += 1;
            }
            else
            {
                while(freq>9)
                {
                    compressed += to_string(9)+curr;
                    freq -= 9;
                }
                compressed += to_string(freq)+curr;
                curr = word[i+1];
                freq = 1;
            }
        }
        while(freq>9)
        {
            compressed += to_string(9)+curr;
            freq -= 9;
        }
        compressed += to_string(freq)+curr;
        return compressed;
    }
};