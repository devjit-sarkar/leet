class Solution {
public:
    string reverseVowels(string s) {
        // int count;
        // for(int i=0; i<s.size(); i++)
        // {
        //     if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'||s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U')
        //     {
        //         count++;
        //     }
        // }
        vector<int> indexArray;
        //store the index of vowels
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'||s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U')
            {
                indexArray.push_back(i);
            }
        }
        int left=0,right=indexArray.size()-1;

        while(left < right)
        {
            swap(s[indexArray[left]],s[indexArray[right]]);
            left++;
            right--;
        }
        return s;
    }
    void swap(char &a, char &b)
    {
        char temp;
        temp = a;
        a = b;
        b = temp;
    }
};