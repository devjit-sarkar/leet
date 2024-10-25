class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        string s="";
        int count = 1, final_count = 0;
        for(int i = 1; i<=n; i++)
        {
            if(i<n && chars[i] == chars[i-1])
            {
                count++;
            }
            else
            {
                s += chars[i-1];
                final_count += 1; //counting chars

                if(count != 1)
                {
                    final_count += to_string(count).size();
                    s += to_string(count);
                }

                count = 1;
            }
        }
        cout<<s<<" "<<final_count<<endl;
        chars.clear();
        for(int i=0; i<s.size(); i++)
        {
            chars.push_back(s[i]);
        }
        return final_count;
    }
};