class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        double m=1;
        int l=0;
        int c=0;
        if(k<=1){
            return 0;
        }
        for(int r=0;r<n;r++){
            
            m=m*nums[r];
            while(m>=k){
                m=m/nums[l];
                l++;
            }
            c+=r-l+1;
        }
        return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna