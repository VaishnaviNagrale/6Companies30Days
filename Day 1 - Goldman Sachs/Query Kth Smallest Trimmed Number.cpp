class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        for(auto x:queries){
            int k = x[0];
            int trim = x[1];
            vector<pair<string,int>>v;
            for(int i=0;i<nums.size();i++){
                string result = nums[i].substr(nums[i].size()-trim);
                if(result.size()){
                    v.push_back({result,i});
                }
            }
            sort(v.begin(),v.end());
            ans.push_back(v[k-1].second);
        }
        return ans;
    }
};