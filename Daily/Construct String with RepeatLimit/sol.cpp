class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        string ret="";
        int count = 0;
        char cur,next,prev='\0';
        unordered_map <char,int> um; //character,frequency
        priority_queue <char> pq;
        for(int i=0; i<s.size(); i++)
        {
            if(!um[s[i]])
                pq.push(s[i]);
            um[s[i]]++;
        }
        while(!pq.empty())
        {
            cur = pq.top();
            pq.pop();
            if(cur == prev && count == repeatLimit)
            {
                if(pq.empty())
                    break;
                next = pq.top();
                pq.pop();
                ret += next;
                um[next]--;
                if(um[next] > 0)
                    pq.push(next);
                count = 0;
                pq.push(cur);
            }
            else
            {
                ret += cur;
                count = (cur == prev)?count+1:1;
                um[cur]--;
                if(um[cur]>0)
                {
                    pq.push(cur);
                }
            }
            prev = cur;
        }
        return ret;
    }
};