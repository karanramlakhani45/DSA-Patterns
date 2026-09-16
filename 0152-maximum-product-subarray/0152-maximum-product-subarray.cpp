class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pfx=1;
        int sfx=1;
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(pfx==0){
                pfx=1;
            }
            if(sfx==0){
                sfx=1;
            }
            pfx*=nums[i];
            sfx*=nums[n-1-i];
            ans=max(ans,max(pfx,sfx));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna