class Solution {
public:
    long long minEnd(int n, int x) {
        bitset <64> binX(x);
        bitset <64> binN(n-1);
        int j=0;
        for(int i=0; i<64; i++)
        {
            if(binX[i] == 0)
            {
                binX[i] = binN[j];
                j++;
            }
        }
        return binX.to_ulong();
    }
};