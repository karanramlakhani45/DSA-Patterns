class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=1;
        int r=nums.size()-1;
        int m=nums[0];
        while(l<=r){
            if(nums[l]<m){
                m=nums[l];
            }
            l++;
        }
        return m;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna