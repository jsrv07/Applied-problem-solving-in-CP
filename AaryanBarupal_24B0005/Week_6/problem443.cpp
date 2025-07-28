class Solution {
public:
    int compress(vector<char>& chars) {
        int idx=0;
        int sum=1;
        for(int i=1;i<=chars.size();++i){
            if(i<chars.size() && chars[i]==chars[i-1]){
                sum++;
            }
            else{
                chars[idx++]=chars[i-1];
                if(sum>1){
                    string of_count=to_string(sum);
                    for(char c: of_count){
                        chars[idx++]=c;
                    }
                }
                sum=1;
            }
        }
        return idx;
    }
};