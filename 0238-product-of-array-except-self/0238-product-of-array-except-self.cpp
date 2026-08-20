class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        int mul=1;
        for(int i=0;i<nums.size();i++){
            ans[i]*=mul;
            mul*=nums[i];
        }
        mul=1;
        for(int j=n-1;j>=0;j--){
            ans[j]*=mul;
            mul*=nums[j];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna