class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findcombinations(0, target, candidates, ans, ds);
        return ans;
    }
    void findcombinations(int idx, int target, vector<int>& v,
                          vector<vector<int>>& ans, vector<int>& ds) {

        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        
        for (int i = idx; i < v.size(); i++) {
            if (i > idx && v[i] == v[i - 1])
                continue;
            if (v[i] > target)
                break;

            ds.push_back(v[i]);
            findcombinations(i + 1, target - v[i], v, ans, ds);
            ds.pop_back();
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna