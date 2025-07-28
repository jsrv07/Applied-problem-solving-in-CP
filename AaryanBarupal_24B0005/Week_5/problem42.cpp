class Solution {
public:
    int trap(vector<int>& height) {
        int answer=0;
        int ct=0;
        int m=-1;
        for(int i=0;i<height.size();++i){
            if(height[i]>m){
                m=height[i];
                ct=i;
            }
        }
        
        int small=height[0];
        for(int i=1;i<=ct;++i){
            if(height[i]>small){
                small=height[i];
            }
            else{
                answer+=small-height[i];
            }
        }

        small=height.back();
        for(int i=height.size()-2;i>=ct;--i){
            if(height[i]>small){
                small=height[i];
            }
            else{
                answer+=small-height[i];
            }
        }
        return answer;
    }
};