class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0,nums,temp,ans);
        return ans;
    }
    void helper(int index,vector<int>& nums,vector<int>& temp,vector<vector<int>>& ans){
        if(index==nums.size()){
            ans.push_back(temp);
            return ;
        }
        temp.push_back(nums[index]);
        helper(index+1,nums,temp,ans);
        temp.pop_back();
        helper(index+1,nums,temp,ans);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna