class Solution {
public:
    long long mod = 1e9+7;
    int solve(int s,int e,int curr,int k,vector<vector<int>>& dp){
        if(k==0){
            if(curr==e) return 1;
            return 0;
        }
        if(dp[curr+1001][k]!=-1){
            return dp[curr+1001][k];
        }
        int step = (solve(s,e,curr+1,k-1,dp))%mod + (solve(s,e,curr-1,k-1,dp))%mod;
        return dp[curr+1001][k] = step%mod;
    }

    int numberOfWays(int startPos, int endPos, int k) {
        vector<vector<int>>dp(5001,vector<int>(1001,-1));
        return solve(startPos,endPos,startPos,k,dp);
    }
};