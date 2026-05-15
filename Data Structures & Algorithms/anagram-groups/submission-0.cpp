class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> mpp;
        int n = strs.size();

        for (int i = 0; i < n; i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mpp[temp].push_back(i);
        }

        vector<vector<string>> ans;

        for (auto x : mpp) {
            vector<int> v = x.second;
            vector<string> vv;

            for (int i = 0; i < v.size(); i++) {
                vv.push_back(strs[v[i]]);  
            }

            ans.push_back(vv);
        }

        return ans;
    }
};