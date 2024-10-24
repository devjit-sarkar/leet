class Solution {
public:
    string reverseWords(string s) {
        //get the words and store them in a vector
        vector <string> words;
        string a="",b="";
        for(int i=0; i<s.size(); i++)
        {
            //check for whitespaces, words are between two spaces
            //or between a space and end quote, or between two end quotes
            if(s.compare(i,1," ") != 0)
            {
                //while(s.compare(i,1," ") != 0)
                while(i<s.size() && s[i] != ' ')
                {
                    a += s[i];
                    i++;
                }
                if(a.size() != 0)
                {
                    words.push_back(a);
                    a = "";   
                }
            }
        }
        while(words.size() != 0)
        {
            b += words.back();
            words.pop_back();
            if(words.size() > 0)
                b += " ";
        }
        cout<<b<<endl;
        /*for(int i=0; i<words.size(); i++)
        {
            cout<<words[i]<<" ";
        }
        cout<<endl;*/
        return b;
    }
};