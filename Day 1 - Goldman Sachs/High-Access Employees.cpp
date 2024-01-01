class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& a) {
        vector<string>ans;
        int n = a.size();
        sort(a.begin(),a.end());
        unordered_map<string,int>mp;
        for(int i=0;i<n-2;i++){
            if(mp.find(a[i][0])==mp.end() && a[i][0]==a[i+2][0]){
                int start = stoi(a[i][1]);
                int end = stoi(a[i+2][1]);

                if(end-start<100){
                    ans.push_back(a[i][0]);
                    mp[a[i][0]]++;
                }
            }
        }
        return ans;
    }
};