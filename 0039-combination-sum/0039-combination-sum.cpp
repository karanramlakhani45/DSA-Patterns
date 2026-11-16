class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombination(0,target,candidates,ans,ds);
        return ans;
    }
    void findcombination(int idx,int target,vector<int>& v,vector<vector<int>>& ans,vector<int>& ds){
        if(idx==v.size()){
            if(target==0){
                ans.push_back(ds);

            }
            return;
        }
        if(v[idx]<=target){
            ds.push_back(v[idx]);
            findcombination(idx,target-v[idx],v,ans,ds);
            ds.pop_back();
        }
        findcombination(idx+1,target,v,ans,ds);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna