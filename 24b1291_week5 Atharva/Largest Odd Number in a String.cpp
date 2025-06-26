class Solution {
public:
    string largestOddNumber(string num) {
        int index = -1;
        for (int i = num.size() - 1; i >= 0; i--){
            if (num[i]%2 == 1){
                index = i;
                break;
            }
        }
        if (index == -1) return "";
        string res = "";
        for (int i = 0; i <= index; i++){
            res.push_back(num[i]);
        }
        return res;
    }
};