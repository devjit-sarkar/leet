class Solution {
public:
    bool reorderedPowerOf2(int n) {
        if(n == 1){
            return true;
        }
        //get the digits in an array
        vector<int> digits;
        int rem = 0;
        unordered_map<int, int> ogMap;
        unordered_map<int, int> checkMap;
        int greatestNumFromDigits=0;
        int lowestPowerOf2 = 1;
        while(n != 0){
            rem = n%10;
            digits.push_back(rem);
            ogMap[rem] += 1;
            n = n/10;
        }

        //sort the array in descending order, and get the total number of digits
        sort(digits.begin(), digits.end(), greater<int>());
        int numDigits = digits.size();
        for(int i=0; i<numDigits; i++){
            // cout<<digits[i]<<" ";
            greatestNumFromDigits = 10*greatestNumFromDigits+digits[i];
        }

        while(floor(log(lowestPowerOf2)) != numDigits){
            lowestPowerOf2 = lowestPowerOf2<<1;
        }

        //check every combination for those number of digits, lesser than the sorted number(will take time)
        int copy = 0;
        for(int i=lowestPowerOf2; i<=greatestNumFromDigits; i = i*2){
            // cout<<"power of 2: "<<i<<endl;
            checkMap.clear();
            copy = i;
            while(copy != 0){
            rem = copy%10;
            // cout<<"rem is: "<<rem<<endl;
            checkMap[rem] += 1;
            copy = copy/10;
            }

            // for(auto it: checkMap){
            //     cout<<it.first<<" : "<<it.second<<endl;
            // }

            if(ogMap.size() == checkMap.size()){
                // cout<<"size check passed for "<<i<<endl;
                if(ogMap == checkMap){
                return true;
                }  
            }
        }
        return false;
    }
};