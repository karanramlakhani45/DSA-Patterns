class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        v[0]=1;
        for(int i=1;i<nums.size();i++){
            v[i]=v[i-1]*nums[i-1];
        }
        int rightproduct=1;
        for(int i=n-1;i>=0;i--){
            v[i]=v[i]*rightproduct;
            rightproduct*=nums[i];
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna