int solve(int day,int last,vector<vector<int>>& points,vector<vector<int>>& dp){
    if(day==0){
        int max_of_i=0;
        for(int i=0;i<3;++i){
            if(i!=last){
                max_of_i=max(max_of_i,points[day][i]);
            }
        }
        return max_of_i;
    }
    if(dp[day][last]!=-1){
        return dp[day][last];
    }
    int max_of_i=0;
    for(int i=0;i<3;++i){
        if(i!=last){
            max_of_i=max(max_of_i,solve(day-1,i,points,dp)+points[day][i]);
        }
    }
    return dp[day][last]=max_of_i;
}


int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>>dp (n,vector<int>(4,-1));
    return solve(n-1,3,points,dp);
}
