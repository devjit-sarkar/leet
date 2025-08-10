class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pasTri;
        vector<int> inter;
        inter.push_back(1);
        int num = 0;
        for(int i=0; i<numRows; i++){
            pasTri.push_back(inter);
            inter = pasT(inter);
        }
        return pasTri;
    }
    vector<int> pasT(vector<int> inter){
        vector<int> newInt;
        newInt.push_back(1);
        for(int i=0; i<inter.size()-1; i++){
            newInt.push_back(inter[i]+inter[i+1]);
        }
        newInt.push_back(1);
        return newInt;
    }
};