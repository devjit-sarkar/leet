class Solution {
public:
    string largestGoodInteger(string num) {
        string str = "";
        // int number = 999;
        string target;
        for(int i=9; i>=0; i--){
            target = to_string(i)+to_string(i)+to_string(i);
            if(num.find(target) != string::npos){
                cout<<target<<endl;
                return target;
            }
        }
        return str;

    }
};