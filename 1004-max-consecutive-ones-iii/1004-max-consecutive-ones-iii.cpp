class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int zcount=0;
        int mcount=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0){
                zcount++;
            }
            while(zcount>k){
                if(nums[l]==0){
                    zcount--;
                }
                l++;
            }
            mcount=max(mcount,r-l+1);
        }
        return mcount;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna